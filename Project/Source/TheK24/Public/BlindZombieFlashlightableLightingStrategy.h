#pragma once

#include "CoreMinimal.h"
#include "FlashlightablePointsLightingStrategy.h"
#include "BlindZombieFlashlightableLightingStrategy.generated.h"

UCLASS(EditInlineNew)
class UBlindZombieFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
	GENERATED_BODY()

public:
	UBlindZombieFlashlightableLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBlindZombieFlashlightableLightingStrategy) { return 0; }
