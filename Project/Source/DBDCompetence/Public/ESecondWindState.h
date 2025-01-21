#pragma once

#include "CoreMinimal.h"
#include "ESecondWindState.generated.h"

UENUM(BlueprintType)
enum class ESecondWindState : uint8
{
	Loading,
	Locked,
	Available,
	InUse,
};
