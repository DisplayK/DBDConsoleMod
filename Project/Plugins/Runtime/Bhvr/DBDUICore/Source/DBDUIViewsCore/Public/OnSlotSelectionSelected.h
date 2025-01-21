#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "OnSlotSelectionSelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlotSelectionSelected, EPlayerRole, role);
