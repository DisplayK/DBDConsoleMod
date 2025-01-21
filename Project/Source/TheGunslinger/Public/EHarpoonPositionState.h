#pragma once

#include "CoreMinimal.h"
#include "EHarpoonPositionState.generated.h"

UENUM(BlueprintType)
enum class EHarpoonPositionState : uint8
{
	None,
	LoadedInRifle,
	FollowingProjectile,
	ReelBackToRifle,
	AttachedToPlayer,
	Animated,
};
