#pragma once

#include "CoreMinimal.h"
#include "EHoudiniCurveType.generated.h"

UENUM()
enum class EHoudiniCurveType : int64
{
	Invalid = -1,
	Polygon,
	Nurbs,
	Bezier,
	Points,
};
