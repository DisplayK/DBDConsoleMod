#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "SecondHookStageReachedQEEvaluator.generated.h"

UCLASS()
class USecondHookStageReachedQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	USecondHookStageReachedQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USecondHookStageReachedQEEvaluator) { return 0; }
