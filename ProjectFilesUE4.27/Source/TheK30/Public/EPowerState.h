#pragma once

#include "CoreMinimal.h"
#include "EPowerState.generated.h"

UENUM(BlueprintType)
enum class EPowerState : uint8
{
	Ready,
	Charging,
	Snapping,
	DrawPath,
	DrawPathDone,
	OrderStarted,
	PatrolStarted,
	HuntStarted,
	InCooldown,
};
