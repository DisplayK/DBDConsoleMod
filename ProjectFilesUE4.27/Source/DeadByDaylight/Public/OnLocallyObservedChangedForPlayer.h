#pragma once

#include "CoreMinimal.h"
#include "OnLocallyObservedChangedForPlayer.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocallyObservedChangedForPlayer, ADBDPlayer*, player);
