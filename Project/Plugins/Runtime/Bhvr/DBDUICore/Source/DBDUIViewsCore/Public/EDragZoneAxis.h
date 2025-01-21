#pragma once

#include "CoreMinimal.h"
#include "EDragZoneAxis.generated.h"

UENUM(BlueprintType)
enum class EDragZoneAxis : uint8
{
	Horizontal,
	Vertical,
};
