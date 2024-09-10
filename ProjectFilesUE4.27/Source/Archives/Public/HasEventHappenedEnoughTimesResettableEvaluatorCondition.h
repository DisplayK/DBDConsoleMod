#pragma once

#include "CoreMinimal.h"
#include "HasEventHappenedEnoughTimesEvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasEventHappenedEnoughTimesResettableEvaluatorCondition.generated.h"

UCLASS()
class UHasEventHappenedEnoughTimesResettableEvaluatorCondition : public UHasEventHappenedEnoughTimesEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _resetProgressGameEvents;

public:
	UHasEventHappenedEnoughTimesResettableEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasEventHappenedEnoughTimesResettableEvaluatorCondition) { return 0; }
