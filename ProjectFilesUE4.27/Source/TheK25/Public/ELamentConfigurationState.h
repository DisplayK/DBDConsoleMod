#pragma once

#include "CoreMinimal.h"
#include "ELamentConfigurationState.generated.h"

UENUM(BlueprintType)
enum class ELamentConfigurationState : uint8
{
	SurvivorEscapedWithLamentConfiguration,
	WaitingToSpawn,
	Spawned,
	IsBeingPickedUp,
	CarriedBySurvivor,
	HoldingSurvivorHostage,
};
