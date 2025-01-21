#pragma once

#include "CoreMinimal.h"
#include "EThrowHatchetInteractionState.generated.h"

UENUM(BlueprintType)
enum class EThrowHatchetInteractionState : uint8
{
	None,
	Aiming,
	Launching,
	Cancelled,
};
