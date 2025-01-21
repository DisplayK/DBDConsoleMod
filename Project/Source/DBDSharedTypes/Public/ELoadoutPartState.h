#pragma once

#include "CoreMinimal.h"
#include "ELoadoutPartState.generated.h"

UENUM(BlueprintType)
enum class ELoadoutPartState : uint8
{
	None,
	Default,
	InProgress,
	Ready,
	Active,
	Vanished,
};
