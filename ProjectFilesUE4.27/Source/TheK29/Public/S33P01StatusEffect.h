#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "S33P01StatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US33P01StatusEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	US33P01StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const US33P01StatusEffect) { return 0; }
