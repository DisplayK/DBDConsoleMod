#pragma once

#include "CoreMinimal.h"
#include "EBackgroundProgressBarState.generated.h"

UENUM(BlueprintType)
enum class EBackgroundProgressBarState : uint8
{
	Empty,
	Quarter,
	Half,
	ThreeQuarters,
	Full,
};
