#pragma once

#include "CoreMinimal.h"
#include "EVoidEnergyChangeReason.generated.h"

UENUM(BlueprintType)
enum class EVoidEnergyChangeReason : uint8
{
	None,
	AddEnergy,
	LoseEnergy,
	SpendEnergy,
};
