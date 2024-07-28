#pragma once

#include "CoreMinimal.h"
#include "EToastWidgetType.generated.h"

UENUM(BlueprintType)
enum class EToastWidgetType : uint8
{
	Simple,
	Interactable,
};
