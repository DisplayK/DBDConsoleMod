#pragma once

#include "CoreMinimal.h"
#include "EPopupButtonType.generated.h"

UENUM(BlueprintType)
enum class EPopupButtonType : uint8
{
	Regression,
	Progression,
	Alternative,
};
