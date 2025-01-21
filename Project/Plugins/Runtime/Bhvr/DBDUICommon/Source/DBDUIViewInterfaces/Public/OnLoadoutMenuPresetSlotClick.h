#pragma once

#include "CoreMinimal.h"
#include "OnLoadoutMenuPresetSlotClick.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutMenuPresetSlotClick, int32, presetId);
