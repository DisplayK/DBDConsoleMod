#pragma once

#include "CoreMinimal.h"
#include "ESubtitlesBackgroundOpacity.generated.h"

UENUM(BlueprintType)
enum class ESubtitlesBackgroundOpacity : uint8
{
	None,
	Default,
	High,
	Opaque,
};
