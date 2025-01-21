#pragma once

#include "CoreMinimal.h"
#include "OnPlayerStateChanged.generated.h"

class APlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateChanged, const APlayerState*, playerState);
