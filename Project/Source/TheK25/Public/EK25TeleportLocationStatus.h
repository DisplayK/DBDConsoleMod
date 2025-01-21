#pragma once

#include "CoreMinimal.h"
#include "EK25TeleportLocationStatus.generated.h"

UENUM(BlueprintType)
enum class EK25TeleportLocationStatus : uint8
{
	Invalid,
	PassableLocation,
	PerfectLocation,
};
