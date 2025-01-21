#pragma once

#include "CoreMinimal.h"
#include "ObliviousEffect.h"
#include "DeathboundStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeathboundStatusEffect : public UObliviousEffect
{
	GENERATED_BODY()

public:
	UDeathboundStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UDeathboundStatusEffect) { return 0; }
