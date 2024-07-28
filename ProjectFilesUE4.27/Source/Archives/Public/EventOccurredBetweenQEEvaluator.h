#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventOccurredBetweenQEEvaluator.generated.h"

UCLASS()
class UEventOccurredBetweenQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _middleEvent;

	UPROPERTY(EditDefaultsOnly)
	bool outerEventsDifferentTargets;

public:
	UEventOccurredBetweenQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventOccurredBetweenQEEvaluator) { return 0; }
