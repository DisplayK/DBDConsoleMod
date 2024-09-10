#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyJoinedAnalytics.generated.h"

USTRUCT()
struct FPartyJoinedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Success;

	UPROPERTY()
	bool FromJoinRequest;

public:
	DBDANALYTICS_API FPartyJoinedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyJoinedAnalytics) { return 0; }
