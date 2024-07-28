#pragma once

#include "CoreMinimal.h"
#include "EFlickerType.generated.h"

UENUM(BlueprintType)
enum class EFlickerType : uint8
{
	None,
	Flickering,
	FlickeringFast,
};
