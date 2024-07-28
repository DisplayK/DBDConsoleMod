#pragma once

#include "CoreMinimal.h"
#include "GapEnum.generated.h"

UENUM(BlueprintType)
enum class GapEnum : uint8
{
	Value1,
	Value2 = 2,
	Value3,
};
