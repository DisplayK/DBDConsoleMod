#pragma once

#include "CoreMinimal.h"
#include "EOfferingCombinationResult.generated.h"

UENUM(BlueprintType)
enum class EOfferingCombinationResult : uint8
{
	None,
	Stacked,
	CoConsummed,
	Overruling,
	Cancelled,
};
