#pragma once

#include "CoreMinimal.h"
#include "FK26AttachedCrowRemovalReason.generated.h"

UENUM(BlueprintType)
enum class FK26AttachedCrowRemovalReason : uint8
{
	Invalid,
	LockerEnter,
	SurvivorDamagedByCrow,
	SurvivorDowned,
	SurvivorPickedUp,
	CrowFlashlighted,
	RemoveInteraction,
};
