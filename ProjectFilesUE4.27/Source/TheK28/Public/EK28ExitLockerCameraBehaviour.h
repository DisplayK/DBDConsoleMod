#pragma once

#include "CoreMinimal.h"
#include "EK28ExitLockerCameraBehaviour.generated.h"

UENUM(BlueprintType)
enum class EK28ExitLockerCameraBehaviour : uint8
{
	None,
	AttachCameraOnKillerEyesJoint,
	SetKillerAsPlayerViewTarget,
};
