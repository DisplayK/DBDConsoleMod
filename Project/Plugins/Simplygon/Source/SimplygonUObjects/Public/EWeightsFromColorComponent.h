#pragma once

#include "CoreMinimal.h"
#include "EWeightsFromColorComponent.generated.h"

UENUM(BlueprintType)
enum class EWeightsFromColorComponent : uint8
{
	Red,
	Green,
	Blue,
	Alpha,
};
