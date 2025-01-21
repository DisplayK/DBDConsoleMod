#pragma once

#include "CoreMinimal.h"
#include "PerspectiveEffectActivationEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPerspectiveEffectActivationEvent, bool, isActive);
