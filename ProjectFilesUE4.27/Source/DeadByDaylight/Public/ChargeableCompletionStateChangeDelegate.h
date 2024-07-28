#pragma once

#include "CoreMinimal.h"
#include "ChargeableCompletionStateChangeDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChargeableCompletionStateChangeDelegate, bool, completed, const TArray<AActor*>&, instigatorsForCompletion);
