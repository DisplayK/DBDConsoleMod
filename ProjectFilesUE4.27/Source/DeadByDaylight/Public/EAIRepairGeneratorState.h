#pragma once

#include "CoreMinimal.h"
#include "EAIRepairGeneratorState.generated.h"

UENUM(BlueprintType)
enum class EAIRepairGeneratorState : uint8
{
	FindAvailableGeneratorPosition,
	WalkToGenerator,
	RotateTowardsGenerator,
	BeginGeneratorRepairs,
	RepairingGenerator,
};
