#pragma once

#include "CoreMinimal.h"
#include "TierChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTierChangeDelegate, int32, previousTier, int32, currentTier, bool, isFirstTime);
