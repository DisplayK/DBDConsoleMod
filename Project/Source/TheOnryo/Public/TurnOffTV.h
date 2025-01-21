#pragma once

#include "CoreMinimal.h"
#include "SurvivorTelevisionInteraction.h"
#include "TurnOffTV.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTurnOffTV : public USurvivorTelevisionInteraction
{
	GENERATED_BODY()

public:
	UTurnOffTV();
};

FORCEINLINE uint32 GetTypeHash(const UTurnOffTV) { return 0; }
