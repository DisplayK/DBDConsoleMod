#pragma once

#include "CoreMinimal.h"
#include "EK26AmmoCooldownReason.generated.h"

UENUM(BlueprintType)
enum class EK26AmmoCooldownReason : uint8
{
	Expired,
	Fired,
};
