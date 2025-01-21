#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "EventInTimeQEEvaluator.generated.h"

UCLASS()
class UEventInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UEventInTimeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventInTimeQEEvaluator) { return 0; }
