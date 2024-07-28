#pragma once

#include "CoreMinimal.h"
#include "EWeightsFromColorMode.generated.h"

UENUM(BlueprintType)
enum class EWeightsFromColorMode : uint8
{
	Standard,
	High,
	Low,
};
