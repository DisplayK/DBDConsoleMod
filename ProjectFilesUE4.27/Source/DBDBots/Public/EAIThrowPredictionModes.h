#pragma once

#include "CoreMinimal.h"
#include "EAIThrowPredictionModes.generated.h"

UENUM(BlueprintType)
enum class EAIThrowPredictionModes : uint8
{
	FindBestThrowPowerRatio,
	FullThrowPowerRatio,
};
