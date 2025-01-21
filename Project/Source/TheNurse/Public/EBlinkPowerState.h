#pragma once

#include "CoreMinimal.h"
#include "EBlinkPowerState.generated.h"

UENUM(BlueprintType)
enum class EBlinkPowerState : uint8
{
	Ready,
	ChainBlink,
	AttackBlink,
	AwaitingCooldown,
	Cooldown,
};
