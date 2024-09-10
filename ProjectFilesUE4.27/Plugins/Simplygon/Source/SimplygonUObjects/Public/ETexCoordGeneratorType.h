#pragma once

#include "CoreMinimal.h"
#include "ETexCoordGeneratorType.generated.h"

UENUM(BlueprintType)
enum class ETexCoordGeneratorType : uint8
{
	Parameterizer,
	ChartAggregator,
};
