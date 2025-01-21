#pragma once

#include "CoreMinimal.h"
#include "EBoneReductionTargetStopCondition.generated.h"

UENUM(BlueprintType)
enum class EBoneReductionTargetStopCondition : uint8
{
	Any,
	All,
};
