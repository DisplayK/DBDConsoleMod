#pragma once

#include "CoreMinimal.h"
#include "AnimNotifyDelegate_Release.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimNotifyDelegate_Release, ADBDPlayer*, player);
