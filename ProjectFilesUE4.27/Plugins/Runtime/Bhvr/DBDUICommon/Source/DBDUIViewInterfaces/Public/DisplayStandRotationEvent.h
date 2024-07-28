#pragma once

#include "CoreMinimal.h"
#include "DisplayStandRotationEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisplayStandRotationEvent, float, distance);
