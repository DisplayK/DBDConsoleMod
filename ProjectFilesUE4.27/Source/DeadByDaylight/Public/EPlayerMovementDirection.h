#pragma once

#include "CoreMinimal.h"
#include "EPlayerMovementDirection.generated.h"

UENUM(BlueprintType)
enum class EPlayerMovementDirection : uint8
{
	Left,
	Right,
	Forward,
	Backward,
};
