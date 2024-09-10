#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "CarryDistanceQEEvaluator.generated.h"

UCLASS()
class UCarryDistanceQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UCarryDistanceQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UCarryDistanceQEEvaluator) { return 0; }
