#pragma once

#include "CoreMinimal.h"
#include "ETelevisionCosmeticState.generated.h"

UENUM(BlueprintType)
enum class ETelevisionCosmeticState : uint8
{
	Off,
	TurningOn,
	TurningOff,
	Static,
	TransitionToSurvivorTape,
	PlaySurvivorTape,
	TransitionToKillerTape,
	PlayKillerTape,
	TransitionFromSurvivorTapeToStatic,
	TransitionFromKillerTapeToStatic,
	FakeTeleport,
	TurningOffOnEject,
};
