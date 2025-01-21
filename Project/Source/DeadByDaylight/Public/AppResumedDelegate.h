#pragma once

#include "CoreMinimal.h"
#include "AppResumedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAppResumedDelegate, bool, isAppResumed);
