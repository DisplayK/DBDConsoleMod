#pragma once

#include "CoreMinimal.h"
#include "EPartyPostMatchmakingState.generated.h"

UENUM(BlueprintType)
enum class EPartyPostMatchmakingState : uint8
{
	None,
	InProgress,
	Completed,
	Error,
};
