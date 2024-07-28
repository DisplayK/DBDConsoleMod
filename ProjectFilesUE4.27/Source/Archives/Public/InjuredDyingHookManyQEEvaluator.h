#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "InjuredDyingHookManyQEEvaluator.generated.h"

UCLASS()
class UInjuredDyingHookManyQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UInjuredDyingHookManyQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UInjuredDyingHookManyQEEvaluator) { return 0; }
