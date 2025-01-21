#pragma once

#include "CoreMinimal.h"
#include "OnSurvivorGrabbed.generated.h"

class ACamperPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSurvivorGrabbed, ACamperPlayer*, survivor);
