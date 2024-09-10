#pragma once

#include "CoreMinimal.h"
#include "EChainStrikeCameraViewTarget.generated.h"

UENUM(BlueprintType)
enum class EChainStrikeCameraViewTarget : uint8
{
	Killer,
	Gateway,
	ControlledProjectile,
};
