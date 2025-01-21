#pragma once

#include "CoreMinimal.h"
#include "EFireHarpoonRifleInteractionState.generated.h"

UENUM(BlueprintType)
enum class EFireHarpoonRifleInteractionState : uint8
{
	None,
	Aiming,
	FirePhase,
	MissPhase,
	SuccessPhase,
	EndResult,
	CanceledAiming,
};
