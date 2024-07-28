#pragma once

#include "CoreMinimal.h"
#include "EK28NightCycleState.generated.h"

UENUM(BlueprintType)
enum class EK28NightCycleState : uint8
{
	Charging,
	TransitioningToDischarging,
	Discharging,
	TransitioningToCharging,
};
