#pragma once

#include "CoreMinimal.h"
#include "EStaticFieldMovementSpeed.generated.h"

UENUM(BlueprintType)
enum class EStaticFieldMovementSpeed : uint8
{
	Slow,
	Medium,
	Fast,
	RunningFast,
};
