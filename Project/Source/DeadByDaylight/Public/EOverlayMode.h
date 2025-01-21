#pragma once

#include "CoreMinimal.h"
#include "EOverlayMode.generated.h"

UENUM(BlueprintType)
enum class EOverlayMode : uint8
{
	Default,
	TrialOrTally,
	TutorialLevel,
	TutorialBotMatch,
};
