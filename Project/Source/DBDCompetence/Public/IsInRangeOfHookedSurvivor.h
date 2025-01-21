#pragma once

#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "IsInRangeOfHookedSurvivor.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsInRangeOfHookedSurvivor : public URangeBasedCondition
{
	GENERATED_BODY()

public:
	UIsInRangeOfHookedSurvivor();
};

FORCEINLINE uint32 GetTypeHash(const UIsInRangeOfHookedSurvivor) { return 0; }
