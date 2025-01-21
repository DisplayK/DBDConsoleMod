#pragma once

#include "CoreMinimal.h"
#include "EComparisonOperation.generated.h"

UENUM(BlueprintType)
enum class EComparisonOperation : uint8
{
	EqualTo,
	NotEqualTo,
	GreaterThan,
	GreaterThanOrEqualTo,
	LesserThan,
	LesserThanOrEqualTo,
};
