#pragma once

#include "CoreMinimal.h"
#include "EPurchasePopupState.generated.h"

UENUM(BlueprintType)
enum class EPurchasePopupState : uint8
{
	Information,
	TitleOnly,
};
