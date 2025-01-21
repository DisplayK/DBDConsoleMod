#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyInvitedAnalytics.generated.h"

USTRUCT()
struct FPartyInvitedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString InviteeId;

	UPROPERTY()
	bool Success;

public:
	DBDANALYTICS_API FPartyInvitedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyInvitedAnalytics) { return 0; }
