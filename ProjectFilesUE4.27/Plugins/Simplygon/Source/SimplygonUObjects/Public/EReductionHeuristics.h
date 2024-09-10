#pragma once

#include "CoreMinimal.h"
#include "EReductionHeuristics.generated.h"

UENUM(BlueprintType)
enum class EReductionHeuristics : uint8
{
	Fast,
	Consistent,
};
