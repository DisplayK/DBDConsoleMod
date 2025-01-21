#pragma once

#include "CoreMinimal.h"
#include "EInteractionComparisonPriority.generated.h"

UENUM(BlueprintType)
enum class EInteractionComparisonPriority : uint8
{
	Lower,
	Equal,
	Higher,
};
