#pragma once

#include "CoreMinimal.h"
#include "EFlurryOfKnivesInteractionState.generated.h"

UENUM(BlueprintType)
enum class EFlurryOfKnivesInteractionState : uint8
{
	Charging,
	Aiming,
	Throwing,
	Finished,
};
