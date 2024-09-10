#pragma once

#include "CoreMinimal.h"
#include "DisplayStandControllerData.generated.h"

USTRUCT()
struct FDisplayStandControllerData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FDisplayStandControllerData();
};

FORCEINLINE uint32 GetTypeHash(const FDisplayStandControllerData) { return 0; }
