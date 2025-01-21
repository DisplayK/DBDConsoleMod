#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontageEndedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontageEndedDelegate, const FAnimationMontageDescriptor, animMontageID, bool, interrupted);
