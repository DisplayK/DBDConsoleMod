#pragma once

#include "CoreMinimal.h"
#include "ESubtitlesPosition.generated.h"

UENUM(BlueprintType)
enum class ESubtitlesPosition : uint8
{
	HUD,
	Menus,
	Cinematics,
};
