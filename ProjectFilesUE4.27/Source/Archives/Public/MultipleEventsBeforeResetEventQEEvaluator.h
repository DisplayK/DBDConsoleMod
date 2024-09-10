#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "MultipleEventsBeforeResetEventQEEvaluator.generated.h"

UCLASS()
class UMultipleEventsBeforeResetEventQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _gameEventsResettingProgress;

public:
	UMultipleEventsBeforeResetEventQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMultipleEventsBeforeResetEventQEEvaluator) { return 0; }
