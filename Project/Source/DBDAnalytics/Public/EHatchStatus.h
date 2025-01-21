#pragma once

#include "CoreMinimal.h"
#include "EHatchStatus.generated.h"

UENUM(BlueprintType)
enum class EHatchStatus : uint8
{
	Hidden,
	Visible,
	Open,
	Closed,
	ClosedOrHidden,
};
