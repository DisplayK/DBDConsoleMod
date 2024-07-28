#pragma once

#include "CoreMinimal.h"
#include "ESecondaryActionRequestTypes.generated.h"

UENUM(BlueprintType)
enum class ESecondaryActionRequestTypes : uint8
{
	None,
	SecondaryActionRequested,
	SecondaryActionRequestedFromCancel,
};
