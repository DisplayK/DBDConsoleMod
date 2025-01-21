#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "S33p02StatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class US33p02StatusEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	US33p02StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const US33p02StatusEffect) { return 0; }
