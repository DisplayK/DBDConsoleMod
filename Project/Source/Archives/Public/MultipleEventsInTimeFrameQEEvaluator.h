#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "MultipleEventsInTimeFrameQEEvaluator.generated.h"

UCLASS()
class UMultipleEventsInTimeFrameQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UMultipleEventsInTimeFrameQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMultipleEventsInTimeFrameQEEvaluator) { return 0; }
