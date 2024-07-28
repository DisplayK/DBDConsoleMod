#pragma once

#include "CoreMinimal.h"
#include "NotificationHistoryElement.generated.h"

USTRUCT()
struct FNotificationHistoryElement
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FNotificationHistoryElement();
};

FORCEINLINE uint32 GetTypeHash(const FNotificationHistoryElement) { return 0; }
