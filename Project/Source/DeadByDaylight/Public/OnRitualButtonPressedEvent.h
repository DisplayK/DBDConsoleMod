#pragma once

#include "CoreMinimal.h"
#include "OnRitualButtonPressedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRitualButtonPressedEvent, int32, ritualId, const FString&, ritualType, int32, buttonData);
