#pragma once

#include "CoreMinimal.h"
#include "EFPVTransitionStrategy.generated.h"

UENUM(BlueprintType)
enum class EFPVTransitionStrategy : uint8
{
	TurnInvisible,
	SquishTorsoBackward,
};
