#pragma once

#include "CoreMinimal.h"
#include "CombinedSpecialEventData.generated.h"

USTRUCT(BlueprintType)
struct FCombinedSpecialEventData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FCombinedSpecialEventData();
};

FORCEINLINE uint32 GetTypeHash(const FCombinedSpecialEventData) { return 0; }
