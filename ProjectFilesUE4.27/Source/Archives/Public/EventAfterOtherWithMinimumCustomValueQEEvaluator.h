#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventAfterOtherWithMinimumCustomValueQEEvaluator.generated.h"

UCLASS()
class UEventAfterOtherWithMinimumCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _startEvent;

public:
	UEventAfterOtherWithMinimumCustomValueQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventAfterOtherWithMinimumCustomValueQEEvaluator) { return 0; }
