#pragma once

#include "CoreMinimal.h"
#include "ELoadoutSlot.h"
#include "LoadoutMenuSlotIsSelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadoutMenuSlotIsSelected, ELoadoutSlot, slotSelected);
