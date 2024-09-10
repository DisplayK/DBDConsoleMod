#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "UniqueTargetsInTimeQEEvaluator.generated.h"

UCLASS()
class UUniqueTargetsInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UUniqueTargetsInTimeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UUniqueTargetsInTimeQEEvaluator) { return 0; }
