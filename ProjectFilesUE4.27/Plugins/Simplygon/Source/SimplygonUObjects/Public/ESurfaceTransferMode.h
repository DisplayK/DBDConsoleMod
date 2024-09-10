#pragma once

#include "CoreMinimal.h"
#include "ESurfaceTransferMode.generated.h"

UENUM(BlueprintType)
enum class ESurfaceTransferMode : uint8
{
	Fast,
	Accurate,
};
