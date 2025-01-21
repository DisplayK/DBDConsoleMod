#pragma once

#include "CoreMinimal.h"
#include "EHoudiniCurveMethod.generated.h"

UENUM()
enum class EHoudiniCurveMethod : int64
{
	Invalid = -1,
	CVs,
	Breakpoints,
	Freehand,
};
