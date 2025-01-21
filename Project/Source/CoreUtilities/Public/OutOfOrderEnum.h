#pragma once

#include "CoreMinimal.h"
#include "OutOfOrderEnum.generated.h"

UENUM(BlueprintType)
enum class OutOfOrderEnum : uint8
{
	Value1 = 2,
	Value2 = 0,
	Value3,
};
