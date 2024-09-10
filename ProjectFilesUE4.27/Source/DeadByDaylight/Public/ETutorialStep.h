#pragma once

#include "CoreMinimal.h"
#include "ETutorialStep.generated.h"

UENUM(BlueprintType)
enum class ETutorialStep : uint8
{
	Survivor_NotStarted,
	Survivor_CompleteGenerator,
	Survivor_EvadeKiller,
	Survivor_OnHook,
	Done,
	Invalid,
};
