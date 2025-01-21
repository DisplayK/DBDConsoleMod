#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ThanatophobiaEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UThanatophobiaEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UThanatophobiaEffect();
};

FORCEINLINE uint32 GetTypeHash(const UThanatophobiaEffect) { return 0; }
