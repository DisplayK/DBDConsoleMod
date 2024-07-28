#pragma once

#include "CoreMinimal.h"
#include "ArchiveRiftOnRewardItemClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArchiveRiftOnRewardItemClicked, FName, itemId);
