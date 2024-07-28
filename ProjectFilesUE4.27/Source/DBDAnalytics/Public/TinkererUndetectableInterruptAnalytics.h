#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "TinkererUndetectableInterruptAnalytics.generated.h"

USTRUCT()
struct FTinkererUndetectableInterruptAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString InterruptedSurvivorMirrorsId;

	UPROPERTY()
	FString InterruptingSlasherMirrorsId;

public:
	DBDANALYTICS_API FTinkererUndetectableInterruptAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FTinkererUndetectableInterruptAnalytics) { return 0; }
