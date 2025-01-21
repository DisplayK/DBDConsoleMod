#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TimedStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTimedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UTimedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTimedStatusEffect) { return 0; }
