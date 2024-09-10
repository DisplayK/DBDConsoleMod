#pragma once

#include "CoreMinimal.h"
#include "EGameState.h"
#include "OnPlayerGameStateChanged.generated.h"

class ADBDPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerGameStateChanged, ADBDPlayerState*, playerState, const EGameState, gameState);
