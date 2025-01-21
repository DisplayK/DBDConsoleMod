#pragma once

#include "CoreMinimal.h"
#include "EInteractionTargetInSightModes.generated.h"

UENUM(BlueprintType)
enum class EInteractionTargetInSightModes : uint8
{
	None,
	MustBeInSight,
	MustBeInSight_NoObstruction,
	ActivateIfOutOfSight,
};
