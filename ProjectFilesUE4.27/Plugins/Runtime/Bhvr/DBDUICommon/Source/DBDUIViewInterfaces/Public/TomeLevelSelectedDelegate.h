#pragma once

#include "CoreMinimal.h"
#include "TomeLevelSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTomeLevelSelectedDelegate, int32, level);
