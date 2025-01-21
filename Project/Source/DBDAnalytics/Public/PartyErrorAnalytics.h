#pragma once

#include "CoreMinimal.h"
#include "PartyAnalytics.h"
#include "PartyErrorAnalytics.generated.h"

USTRUCT()
struct FPartyErrorAnalytics: public FPartyAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Error;

public:
	DBDANALYTICS_API FPartyErrorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPartyErrorAnalytics) { return 0; }
