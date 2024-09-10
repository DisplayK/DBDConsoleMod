#pragma once

#include "CoreMinimal.h"
#include "OnInfectionRemovalCollectableUsed.generated.h"

class ACamperPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInfectionRemovalCollectableUsed, ACamperPlayer*, survivor);
