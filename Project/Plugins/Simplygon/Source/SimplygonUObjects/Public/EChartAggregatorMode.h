#pragma once

#include "CoreMinimal.h"
#include "EChartAggregatorMode.generated.h"

UENUM(BlueprintType)
enum class EChartAggregatorMode : uint8
{
	TextureSizeProportions,
	SurfaceArea,
	OriginalPixelDensity,
	UVSizeProportions,
};
