#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyCreatedAnalytics.generated.h"

USTRUCT()
struct FPartyCreatedAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Success;

public:
	DBDANALYTICS_API FPartyCreatedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyCreatedAnalytics) { return 0; }
