#pragma once

#include "CoreMinimal.h"
#include "IsInRangeOfHookedSurvivor.h"
#include "ReassuranceCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UReassuranceCondition : public UIsInRangeOfHookedSurvivor
{
	GENERATED_BODY()

public:
	UReassuranceCondition();
};

FORCEINLINE uint32 GetTypeHash(const UReassuranceCondition) { return 0; }
