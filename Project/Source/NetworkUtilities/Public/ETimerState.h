#pragma once

#include "CoreMinimal.h"
#include "ETimerState.generated.h"

UENUM(BlueprintType)
enum class ETimerState : uint8
{
	Cleared,
	Started,
	Paused,
};
