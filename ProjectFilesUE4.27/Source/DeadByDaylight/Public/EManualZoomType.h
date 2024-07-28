#pragma once

#include "CoreMinimal.h"
#include "EManualZoomType.generated.h"

UENUM(BlueprintType)
enum class EManualZoomType : uint8
{
	None,
	TargetZoomValue,
	CurveFloatProgression,
};
