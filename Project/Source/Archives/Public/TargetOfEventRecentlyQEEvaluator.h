#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetOfEventRecentlyQEEvaluator.generated.h"

UCLASS()
class UTargetOfEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _firstGameEvent;

	UPROPERTY(EditDefaultsOnly)
	bool _secondEventOnSelf;

public:
	UTargetOfEventRecentlyQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetOfEventRecentlyQEEvaluator) { return 0; }
