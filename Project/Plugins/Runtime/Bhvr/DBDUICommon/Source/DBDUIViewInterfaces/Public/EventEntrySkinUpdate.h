#pragma once

#include "CoreMinimal.h"
#include "EventEntrySkinUpdate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventEntrySkinUpdate, FName, EventLabel);
