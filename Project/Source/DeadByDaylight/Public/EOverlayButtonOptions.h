#pragma once

#include "CoreMinimal.h"
#include "EOverlayButtonOptions.generated.h"

UENUM(BlueprintType)
enum class EOverlayButtonOptions : uint8
{
	HIDDEN,
	DISABLED,
	ENABLED,
};
