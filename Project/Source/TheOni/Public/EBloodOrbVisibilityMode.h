#pragma once

#include "CoreMinimal.h"
#include "EBloodOrbVisibilityMode.generated.h"

UENUM(BlueprintType)
enum class EBloodOrbVisibilityMode : uint8
{
	VisibleWithinRange,
	HideAll,
};
