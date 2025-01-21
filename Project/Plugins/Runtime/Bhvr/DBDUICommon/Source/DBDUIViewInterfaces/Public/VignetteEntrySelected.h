#pragma once

#include "CoreMinimal.h"
#include "VignetteEntrySelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVignetteEntrySelected, const int32, vignetteEntryIndex);
