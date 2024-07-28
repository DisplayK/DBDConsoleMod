#pragma once

#include "CoreMinimal.h"
#include "EIntroState.generated.h"

UENUM(BlueprintType)
enum class EIntroState : uint8
{
	WaitingToStart,
	RotationStarted,
	RotationCompleted,
	PanInStarted,
	PanInCompleted,
};
