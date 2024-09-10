#pragma once

#include "CoreMinimal.h"
#include "EErrorEventType.generated.h"

UENUM(BlueprintType)
enum class EErrorEventType : uint8
{
	FailedToCalculateRankProgress,
	FailedToEarnPlayerXp,
	FailedToGrandBloodPoints,
	FailedToSyncWalletChanges,
	InvalidLobbyId,
	InvalidGameState,
	InvalidSessionId,
};
