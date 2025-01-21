#pragma once

#include "CoreMinimal.h"
#include "EPopupPriority.generated.h"

UENUM(BlueprintType)
enum class EPopupPriority : uint8
{
	ErrorSystem,
	ErrorGameHigh,
	ErrorGameLow,
	InfoHigh,
	InfoLow,
	ErrorUIThreshold = 2,
	LowestPriority = 4,
};
