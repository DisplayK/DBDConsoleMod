#pragma once

#include "CoreMinimal.h"
#include "EGameLayer.generated.h"

UENUM(BlueprintType)
enum class EGameLayer : uint8
{
	Default,
	UMGPopup,
	Watermark,
};
