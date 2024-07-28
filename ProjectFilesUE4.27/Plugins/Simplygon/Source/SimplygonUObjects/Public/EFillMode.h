#pragma once

#include "CoreMinimal.h"
#include "EFillMode.generated.h"

UENUM(BlueprintType)
enum class EFillMode : uint8
{
	Interpolate,
	NearestNeighbor,
	NoFill,
};
