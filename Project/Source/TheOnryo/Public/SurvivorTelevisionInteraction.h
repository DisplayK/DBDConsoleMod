#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "SurvivorTelevisionInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USurvivorTelevisionInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

public:
	USurvivorTelevisionInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorTelevisionInteraction) { return 0; }
