#pragma once

#include "CoreMinimal.h"
#include "PhaseWalkInfo.h"
#include "TriggerKillerVisibilityVFX.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTriggerKillerVisibilityVFX, bool, wasPassivePhaseWalking, bool, wasActivePhaseWalking, const FPhaseWalkInfo&, phaseWalkInfo);
