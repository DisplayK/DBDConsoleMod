#pragma once

#include "CoreMinimal.h"
#include "OnFirstPersonModeChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirstPersonModeChanged, bool, firstPerson);
