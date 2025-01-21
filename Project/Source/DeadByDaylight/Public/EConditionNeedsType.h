#pragma once

#include "CoreMinimal.h"
#include "EConditionNeedsType.generated.h"

UENUM(BlueprintType)
enum class EConditionNeedsType : uint8
{
	AllTrue,
	AnyTrue,
};
