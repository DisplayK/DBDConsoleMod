#pragma once

#include "CoreMinimal.h"
#include "AIGoal.h"
#include "AIGoalWeight.generated.h"

USTRUCT()
struct FAIGoalWeight
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FAIGoal GoalInfo;

	UPROPERTY()
	float Weight;

	UPROPERTY()
	FString WeightDebug;

public:
	DBDBOTS_API FAIGoalWeight();
};

FORCEINLINE uint32 GetTypeHash(const FAIGoalWeight) { return 0; }
