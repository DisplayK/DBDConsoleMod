#pragma once

#include "CoreMinimal.h"
#include "EK28LockbarState.generated.h"

UENUM(BlueprintType)
enum class EK28LockbarState : uint8
{
	Unlocked,
	Locked,
	Broken,
};
