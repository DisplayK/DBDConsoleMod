#pragma once

#include "CoreMinimal.h"
#include "ESpawnerStrategyType.generated.h"

UENUM(BlueprintType)
enum class ESpawnerStrategyType : uint8
{
	None,
	NoAccumulation,
	LimitAccumulation,
};
