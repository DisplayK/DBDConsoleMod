#pragma once

#include "CoreMinimal.h"
#include "EStoryNodeState.generated.h"

UENUM(BlueprintType)
enum class EStoryNodeState : uint8
{
	Unavailable,
	AvailableDefault,
	AvailableActive,
	AvailablePaused,
	Completed,
	Claimed,
	None = 255,
};
