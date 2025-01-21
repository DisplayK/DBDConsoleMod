#pragma once

#include "CoreMinimal.h"
#include "ELoadoutSlot.h"
#include "OnLoadoutMenuInventorySlotClick.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoadoutMenuInventorySlotClick, ELoadoutSlot, itemIndex, const FName, itemId);
