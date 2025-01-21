#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "LightbornAuraRevealEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API ULightbornAuraRevealEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

public:
	ULightbornAuraRevealEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULightbornAuraRevealEffect) { return 0; }
