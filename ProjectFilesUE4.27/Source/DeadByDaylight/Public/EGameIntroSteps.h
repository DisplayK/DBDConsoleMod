#pragma once

#include "CoreMinimal.h"
#include "EGameIntroSteps.generated.h"

UENUM(BlueprintType)
enum class EGameIntroSteps : uint8
{
	Idling,
	PlayingIntro,
	LoopingCamView,
};
