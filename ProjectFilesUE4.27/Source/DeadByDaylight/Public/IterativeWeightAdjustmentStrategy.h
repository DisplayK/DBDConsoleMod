#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IterativeWeightAdjustmentStrategy.generated.h"

UCLASS(Abstract)
class DEADBYDAYLIGHT_API UIterativeWeightAdjustmentStrategy : public UObject
{
	GENERATED_BODY()

public:
	UIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UIterativeWeightAdjustmentStrategy) { return 0; }
