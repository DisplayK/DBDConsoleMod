#pragma once

#include "CoreMinimal.h"
#include "OnSensedDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSensedDelegate, ADBDPlayer*, player);
