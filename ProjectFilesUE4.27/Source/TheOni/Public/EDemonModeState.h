#pragma once

#include "CoreMinimal.h"
#include "EDemonModeState.generated.h"

UENUM(BlueprintType)
enum class EDemonModeState : uint8
{
	Invalid,
	NotInPower,
	Activation,
	InPower,
	Cooldown,
};
