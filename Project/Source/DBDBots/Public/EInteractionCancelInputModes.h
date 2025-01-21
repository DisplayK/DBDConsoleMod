#pragma once

#include "CoreMinimal.h"
#include "EInteractionCancelInputModes.generated.h"

UENUM(BlueprintType)
enum class EInteractionCancelInputModes : uint8
{
	PressCancelInput,
	InvertWithStopInputFlow,
};
