#pragma once

#include "CoreMinimal.h"
#include "ArchiveRiftTierItemClicked.generated.h"

class UCoreButtonWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FArchiveRiftTierItemClicked, int32, tier, UCoreButtonWidget*, selectedReward, bool, isPremium, int32, index);
