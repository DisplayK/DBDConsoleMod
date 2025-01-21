#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "CustomValuePercentQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UCustomValuePercentQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UCustomValuePercentQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UCustomValuePercentQEEvaluator) { return 0; }
