#pragma once

#include "CoreMinimal.h"
#include "OnBloodNodeSelectedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBloodNodeSelectedEvent, int32, characterId, int32, nodeId, int32, nodeDepth);
