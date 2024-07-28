#pragma once

#include "CoreMinimal.h"
#include "ESurfaceAreaScale.generated.h"

UENUM(BlueprintType)
enum class ESurfaceAreaScale : uint8
{
	LargestInstance,
	SmallestInstance,
	Average,
};
