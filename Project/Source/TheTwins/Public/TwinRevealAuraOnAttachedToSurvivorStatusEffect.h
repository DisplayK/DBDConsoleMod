#pragma once

#include "CoreMinimal.h"
#include "ActivateOnEventTimedStatusEffect.h"
#include "TwinRevealAuraOnAttachedToSurvivorStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinRevealAuraOnAttachedToSurvivorStatusEffect : public UActivateOnEventTimedStatusEffect
{
	GENERATED_BODY()

public:
	UTwinRevealAuraOnAttachedToSurvivorStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinRevealAuraOnAttachedToSurvivorStatusEffect) { return 0; }
