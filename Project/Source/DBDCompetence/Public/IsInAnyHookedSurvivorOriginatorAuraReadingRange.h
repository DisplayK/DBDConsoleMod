#pragma once

#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "IsInAnyHookedSurvivorOriginatorAuraReadingRange.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
{
	GENERATED_BODY()

public:
	UIsInAnyHookedSurvivorOriginatorAuraReadingRange();
};

FORCEINLINE uint32 GetTypeHash(const UIsInAnyHookedSurvivorOriginatorAuraReadingRange) { return 0; }
