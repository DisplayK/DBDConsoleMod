#pragma once

#include "CoreMinimal.h"
#include "EFireHarpoonRifleAimingInteractionSubState.generated.h"

UENUM(BlueprintType)
enum class EFireHarpoonRifleAimingInteractionSubState : uint8
{
	None,
	Warmup,
	ReadyToShoot,
	Cooldown,
};
