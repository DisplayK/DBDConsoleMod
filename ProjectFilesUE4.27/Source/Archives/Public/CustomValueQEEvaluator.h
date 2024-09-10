#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "CustomValueQEEvaluator.generated.h"

UCLASS()
class UCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UCustomValueQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UCustomValueQEEvaluator) { return 0; }
