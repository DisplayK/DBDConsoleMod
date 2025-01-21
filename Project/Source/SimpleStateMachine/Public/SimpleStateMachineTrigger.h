#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineTrigger.generated.h"

USTRUCT()
struct FSimpleStateMachineTrigger
{
	GENERATED_BODY()

public:
	SIMPLESTATEMACHINE_API FSimpleStateMachineTrigger();
};

FORCEINLINE uint32 GetTypeHash(const FSimpleStateMachineTrigger) { return 0; }
