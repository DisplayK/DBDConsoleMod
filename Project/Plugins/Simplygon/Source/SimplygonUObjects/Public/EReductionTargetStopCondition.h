#pragma once

#include "CoreMinimal.h"
#include "EReductionTargetStopCondition.generated.h"

UENUM(BlueprintType)
enum class EReductionTargetStopCondition : uint8
{
	Any,
	All,
};
