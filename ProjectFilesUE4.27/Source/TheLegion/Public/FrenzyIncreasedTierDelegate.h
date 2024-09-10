#pragma once

#include "CoreMinimal.h"
#include "FrenzyIncreasedTierDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrenzyIncreasedTierDelegate, int32, tier);
