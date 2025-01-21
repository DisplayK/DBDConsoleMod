#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "InjuredDyingMultipleQEEvaluator.generated.h"

UCLASS()
class UInjuredDyingMultipleQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UInjuredDyingMultipleQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UInjuredDyingMultipleQEEvaluator) { return 0; }
