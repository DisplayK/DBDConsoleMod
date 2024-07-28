#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "CustomValueMoreThanAmountQEEvaluator.generated.h"

UCLASS()
class UCustomValueMoreThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UCustomValueMoreThanAmountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UCustomValueMoreThanAmountQEEvaluator) { return 0; }
