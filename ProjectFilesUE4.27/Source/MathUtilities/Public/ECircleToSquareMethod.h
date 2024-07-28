#pragma once

#include "CoreMinimal.h"
#include "ECircleToSquareMethod.generated.h"

UENUM(BlueprintType)
enum class ECircleToSquareMethod : uint8
{
	SimpleStretching,
	EllipticalGrid,
	FGSquircular,
};
