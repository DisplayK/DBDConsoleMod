#pragma once

#include "CoreMinimal.h"
#include "ParadiseData.generated.h"

USTRUCT(BlueprintType)
struct FParadiseData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FParadiseData();
};

FORCEINLINE uint32 GetTypeHash(const FParadiseData) { return 0; }
