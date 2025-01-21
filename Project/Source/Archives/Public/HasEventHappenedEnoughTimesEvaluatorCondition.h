#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "EventOccurrenceConditionData.h"
#include "HasEventHappenedEnoughTimesEvaluatorCondition.generated.h"

UCLASS()
class UHasEventHappenedEnoughTimesEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FEventOccurrenceConditionData _conditionEventsData;

	UPROPERTY(EditAnywhere)
	float _numOccurrences;

	UPROPERTY(EditAnywhere)
	float _prerequisiteTimeLimit;

	UPROPERTY(EditAnywhere)
	float _triggerTimeLimit;

public:
	UHasEventHappenedEnoughTimesEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasEventHappenedEnoughTimesEvaluatorCondition) { return 0; }
