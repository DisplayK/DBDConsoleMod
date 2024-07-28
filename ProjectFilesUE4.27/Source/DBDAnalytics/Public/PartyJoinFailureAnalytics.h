#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PartyJoinFailureAnalytics.generated.h"

USTRUCT()
struct FPartyJoinFailureAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PartyMembersFriendshipStatus;

	UPROPERTY()
	uint32 NumKrakenConfirmedFriendsInParty;

	UPROPERTY()
	uint32 NumPlatformAcceptedFriendsInParty;

public:
	DBDANALYTICS_API FPartyJoinFailureAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyJoinFailureAnalytics) { return 0; }
