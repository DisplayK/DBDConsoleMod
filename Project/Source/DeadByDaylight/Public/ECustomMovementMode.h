#pragma once

#include "CoreMinimal.h"
#include "ECustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class ECustomMovementMode : uint8
{
	CUSTOM_MOVE_None,
	CUSTOM_MOVE_Snapping,
};
