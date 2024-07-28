#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "LightbornAuraRevealedAnalytics.generated.h"

USTRUCT()
struct FLightbornAuraRevealedAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString RevealedSurvivorMirrorsId;

	UPROPERTY()
	FString FlashlightedSlasherMirrorsId;

public:
	DBDANALYTICS_API FLightbornAuraRevealedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLightbornAuraRevealedAnalytics) { return 0; }
