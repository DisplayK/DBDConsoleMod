#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "AnyEventConditionData.h"
#include "HasOneOfEventsHappenedEvaluatorCondition.generated.h"

UCLASS()
class UHasOneOfEventsHappenedEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FAnyEventConditionData> _conditionEventsData;

public:
	UHasOneOfEventsHappenedEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasOneOfEventsHappenedEvaluatorCondition) { return 0; }
