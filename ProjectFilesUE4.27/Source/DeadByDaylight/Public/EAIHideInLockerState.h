#pragma once

#include "CoreMinimal.h"
#include "EAIHideInLockerState.generated.h"

UENUM(BlueprintType)
enum class EAIHideInLockerState : uint8
{
	WalkToLocker,
	GetIntoLocker,
	HidingInLocker,
};
