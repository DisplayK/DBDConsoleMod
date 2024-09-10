#pragma once

#include "CoreMinimal.h"
#include "TimedObliviousEffect.h"
#include "HysteriaObliviousEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHysteriaObliviousEffect : public UTimedObliviousEffect
{
	GENERATED_BODY()

public:
	UHysteriaObliviousEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHysteriaObliviousEffect) { return 0; }
