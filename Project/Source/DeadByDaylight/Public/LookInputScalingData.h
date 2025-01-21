#pragma once

#include "CoreMinimal.h"
#include "LookInputScalingData.generated.h"

USTRUCT()
struct FLookInputScalingData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FLookInputScalingData();
};

FORCEINLINE uint32 GetTypeHash(const FLookInputScalingData) { return 0; }
