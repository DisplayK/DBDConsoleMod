#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnDragEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDragEvent, FVector2D, cursorDelta);
