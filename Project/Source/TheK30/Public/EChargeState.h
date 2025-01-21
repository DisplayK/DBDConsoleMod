#pragma once

#include "CoreMinimal.h"
#include "EChargeState.generated.h"

UENUM(BlueprintType)
enum class EChargeState : uint8
{
	Inactive,
	Charging,
	ChargeCompleted,
};
