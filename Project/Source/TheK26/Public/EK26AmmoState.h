#pragma once

#include "CoreMinimal.h"
#include "EK26AmmoState.generated.h"

UENUM(BlueprintType)
enum class EK26AmmoState : uint8
{
	Available,
	Expiring,
	Recharging,
};
