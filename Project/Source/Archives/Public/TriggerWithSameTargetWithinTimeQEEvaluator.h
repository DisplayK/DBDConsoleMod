#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "TriggerWithSameTargetWithinTimeQEEvaluator.generated.h"

UCLASS()
class UTriggerWithSameTargetWithinTimeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UTriggerWithSameTargetWithinTimeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTriggerWithSameTargetWithinTimeQEEvaluator) { return 0; }
