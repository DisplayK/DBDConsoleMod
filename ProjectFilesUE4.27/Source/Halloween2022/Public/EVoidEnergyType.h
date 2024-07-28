#pragma once

#include "CoreMinimal.h"
#include "EVoidEnergyType.generated.h"

UENUM(BlueprintType)
enum class EVoidEnergyType : uint8
{
	None,
	PalletStun,
	WiggleStun,
	LockerStun,
	FlashlightStun,
	GeneratorProgress,
	MeatHook,
	Pumpkin,
	DownSurvivor,
};
