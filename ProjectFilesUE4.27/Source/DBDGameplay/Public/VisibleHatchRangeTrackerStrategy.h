#pragma once

#include "CoreMinimal.h"
#include "RangeToActorsTrackerStrategy.h"
#include "VisibleHatchRangeTrackerStrategy.generated.h"

UCLASS(EditInlineNew)
class UVisibleHatchRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
	GENERATED_BODY()

public:
	UVisibleHatchRangeTrackerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UVisibleHatchRangeTrackerStrategy) { return 0; }
