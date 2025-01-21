#pragma once

#include "CoreMinimal.h"
#include "EBloodwebNodeGateTypes.generated.h"

UENUM(BlueprintType)
enum class EBloodwebNodeGateTypes : uint8
{
	RequiredRank,
	RequiredItem,
	Count,
};
