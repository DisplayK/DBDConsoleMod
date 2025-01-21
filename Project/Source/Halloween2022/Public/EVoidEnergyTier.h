#pragma once

#include "CoreMinimal.h"
#include "EVoidEnergyTier.generated.h"

UENUM(BlueprintType)
enum class EVoidEnergyTier : uint8
{
	None,
	Small,
	Medium,
	Large,
	Count,
};
