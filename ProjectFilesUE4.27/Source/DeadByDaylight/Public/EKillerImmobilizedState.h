#pragma once

#include "CoreMinimal.h"
#include "EKillerImmobilizedState.generated.h"

UENUM(BlueprintType)
enum class EKillerImmobilizedState : uint8
{
	VE_None,
	VE_HidingInLocker,
};
