#pragma once

#include "CoreMinimal.h"
#include "RangeToActorsTrackerStrategy.h"
#include "HooksWithSurvivorRangeTrackerStrategy.generated.h"

UCLASS(EditInlineNew)
class UHooksWithSurvivorRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
	GENERATED_BODY()

public:
	UHooksWithSurvivorRangeTrackerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHooksWithSurvivorRangeTrackerStrategy) { return 0; }
