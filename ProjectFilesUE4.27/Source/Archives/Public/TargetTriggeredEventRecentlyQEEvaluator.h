#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetTriggeredEventRecentlyQEEvaluator.generated.h"

UCLASS()
class UTargetTriggeredEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _gameEvent;

public:
	UTargetTriggeredEventRecentlyQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetTriggeredEventRecentlyQEEvaluator) { return 0; }
