#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "TinkererUndetectableHitNearGeneratorAnalytics.generated.h"

USTRUCT()
struct FTinkererUndetectableHitNearGeneratorAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString HitSurvivorMirrorsId;

	UPROPERTY()
	FString AttackingSlasherMirrorsId;

public:
	DBDANALYTICS_API FTinkererUndetectableHitNearGeneratorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FTinkererUndetectableHitNearGeneratorAnalytics) { return 0; }
