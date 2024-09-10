#pragma once

#include "CoreMinimal.h"
#include "AIGoalWeight.h"
#include "AIGoalWeightContainer.generated.h"

USTRUCT()
struct FAIGoalWeightContainer
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FAIGoalWeight> WeightedGoals;

public:
	DBDBOTS_API FAIGoalWeightContainer();
};

FORCEINLINE uint32 GetTypeHash(const FAIGoalWeightContainer) { return 0; }
