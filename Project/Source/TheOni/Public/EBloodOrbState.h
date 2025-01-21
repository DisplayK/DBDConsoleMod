#pragma once

#include "CoreMinimal.h"
#include "EBloodOrbState.generated.h"

UENUM(BlueprintType)
enum class EBloodOrbState : uint8
{
	Invalid,
	BeingDropped,
	Idle,
	WaitingToMove,
	Attracted,
	Absorbed,
	Destroyed,
};
