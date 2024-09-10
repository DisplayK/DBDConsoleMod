#pragma once

#include "CoreMinimal.h"
#include "EUIControllerType.generated.h"

UENUM(BlueprintType)
enum class EUIControllerType : uint8
{
	KeyboardMouse,
	GamePad,
};
