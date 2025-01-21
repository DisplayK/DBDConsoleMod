#pragma once

#include "CoreMinimal.h"
#include "ELobbyWaitStopReason.generated.h"

UENUM(BlueprintType)
enum class ELobbyWaitStopReason : uint8
{
	StartMatchWait,
	PlayerCancelled,
	Unknown,
};
