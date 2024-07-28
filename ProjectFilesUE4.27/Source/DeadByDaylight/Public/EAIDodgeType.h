#pragma once

#include "CoreMinimal.h"
#include "EAIDodgeType.generated.h"

UENUM(BlueprintType)
enum class EAIDodgeType : uint8
{
	FORWARD_SIDE_STEP,
	SIDE_STEP,
	BACKWARD_SIDE_STEP,
};
