#pragma once

#include "CoreMinimal.h"
#include "RangeToActorsTrackerStrategy.h"
#include "ExitGateSwitchesRangeTrackerStrategy.generated.h"

UCLASS(EditInlineNew)
class UExitGateSwitchesRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
	GENERATED_BODY()

public:
	UExitGateSwitchesRangeTrackerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UExitGateSwitchesRangeTrackerStrategy) { return 0; }
