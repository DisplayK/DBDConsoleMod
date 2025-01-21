#pragma once

#include "CoreMinimal.h"
#include "EK29RushPhase.generated.h"

UENUM(BlueprintType)
enum class EK29RushPhase : uint8
{
	EndingInteraction,
	Charging,
	Rushing,
	Bouncing,
	BetweenRushes,
	IntoGrabbingSurvivor,
	GrabbingSurvivor,
	SmashSurvivor,
};
