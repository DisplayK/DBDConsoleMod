#pragma once

#include "CoreMinimal.h"
#include "OnFogScreenButtonClickEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFogScreenButtonClickEvent, int32, eventID);
