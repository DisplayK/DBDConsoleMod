#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "FranklinsHitNearDroppedItemAnalytics.generated.h"

USTRUCT()
struct FFranklinsHitNearDroppedItemAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString HitSurvivorMirrorsId;

	UPROPERTY()
	FString AttackingSlasherMirrorsId;

public:
	DBDANALYTICS_API FFranklinsHitNearDroppedItemAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FFranklinsHitNearDroppedItemAnalytics) { return 0; }
