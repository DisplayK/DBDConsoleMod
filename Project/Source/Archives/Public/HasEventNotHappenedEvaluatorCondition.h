#pragma once

#include "CoreMinimal.h"
#include "BaseRecentEventEvaluatorCondition.h"
#include "HasEventNotHappenedEvaluatorCondition.generated.h"

UCLASS()
class UHasEventNotHappenedEvaluatorCondition : public UBaseRecentEventEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float timeLimitOverride;

public:
	UHasEventNotHappenedEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasEventNotHappenedEvaluatorCondition) { return 0; }
