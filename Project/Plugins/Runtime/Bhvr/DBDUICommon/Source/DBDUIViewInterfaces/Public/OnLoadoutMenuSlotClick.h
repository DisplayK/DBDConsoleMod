#pragma once

#include "CoreMinimal.h"
#include "ELoadoutSlot.h"
#include "OnLoadoutMenuSlotClick.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutMenuSlotClick, ELoadoutSlot, slotIndex);
