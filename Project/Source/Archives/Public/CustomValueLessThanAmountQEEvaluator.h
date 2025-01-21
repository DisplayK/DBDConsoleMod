#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "CustomValueLessThanAmountQEEvaluator.generated.h"

UCLASS()
class UCustomValueLessThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UCustomValueLessThanAmountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UCustomValueLessThanAmountQEEvaluator) { return 0; }
