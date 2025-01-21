#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TriggerDecoyVisibilityVFX.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTriggerDecoyVisibilityVFX, bool, visible, const FVector&, location, const FRotator&, rotation);
