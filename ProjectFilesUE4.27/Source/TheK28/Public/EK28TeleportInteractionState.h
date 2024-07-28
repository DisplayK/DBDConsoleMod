#pragma once

#include "CoreMinimal.h"
#include "EK28TeleportInteractionState.generated.h"

UENUM(BlueprintType)
enum class EK28TeleportInteractionState : uint8
{
	Idle,
	ChargingTeleportation,
	ReadyToTeleport,
	Teleporting,
	TeleportationCompleted,
	TeleportationAborted,
};
