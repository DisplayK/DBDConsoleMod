#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyGuestJoinedAnalytics.generated.h"

USTRUCT()
struct FPartyGuestJoinedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString InviteeId;

	UPROPERTY()
	FString InviteeName;

public:
	DBDANALYTICS_API FPartyGuestJoinedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyGuestJoinedAnalytics) { return 0; }
