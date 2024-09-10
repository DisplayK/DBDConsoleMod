#pragma once

#include "CoreMinimal.h"
#include "EFrameRateLimitButtonSetting.generated.h"

UENUM(BlueprintType)
enum class EFrameRateLimitButtonSetting : uint8
{
	ThirtyFPS,
	SixtyFPS,
};
