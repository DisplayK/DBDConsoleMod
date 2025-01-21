#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "K29P03StatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK29P03StatusEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

public:
	UK29P03StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK29P03StatusEffect) { return 0; }
