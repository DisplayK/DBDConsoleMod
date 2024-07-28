#pragma once

#include "CoreMinimal.h"
#include "EBloodwebDistributionType.generated.h"

UENUM(BlueprintType)
enum class EBloodwebDistributionType : uint8
{
	PerWeb,
	PerRing,
};
