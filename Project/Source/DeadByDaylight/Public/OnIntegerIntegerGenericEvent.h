#pragma once

#include "CoreMinimal.h"
#include "OnIntegerIntegerGenericEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIntegerIntegerGenericEvent, int32, param1, int32, param2);
