#pragma once

#include "CoreMinimal.h"
#include "EButtonWidgetVisibility.generated.h"

UENUM(BlueprintType)
enum class EButtonWidgetVisibility : uint8
{
	Visible,
	Collapsed,
	Hidden,
};
