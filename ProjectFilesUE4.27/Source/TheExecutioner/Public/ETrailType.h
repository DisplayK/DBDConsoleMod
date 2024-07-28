#pragma once

#include "CoreMinimal.h"
#include "ETrailType.generated.h"

UENUM(BlueprintType)
enum class ETrailType : uint8
{
	NormalTrail,
	RestrictionTrail,
	None,
};
