#pragma once

#include "CoreMinimal.h"
#include "RealCaseGapEnum.generated.h"

UENUM()
enum class RealCaseGapEnum : int64
{
	None,
	SavefileDeserializationFailure = 100,
	EarnPlayerXpParamError = 402,
};
