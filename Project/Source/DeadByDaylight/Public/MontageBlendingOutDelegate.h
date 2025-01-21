#pragma once

#include "CoreMinimal.h"
#include "MontageBlendingOutDelegate.generated.h"

class UAnimMontage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontageBlendingOutDelegate, UAnimMontage*, animMontage, bool, interrupted);
