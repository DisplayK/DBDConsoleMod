#pragma once

#include "CoreMinimal.h"
#include "EEscapeDoorActivationMode.generated.h"

UENUM(BlueprintType)
enum class EEscapeDoorActivationMode : uint8
{
	Standard,
	Tutorial,
};
