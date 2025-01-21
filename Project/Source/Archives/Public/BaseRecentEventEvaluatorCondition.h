#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "BaseRecentEventEvaluatorCondition.generated.h"

UCLASS()
class UBaseRecentEventEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _firstGameEvent;

public:
	UBaseRecentEventEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UBaseRecentEventEvaluatorCondition) { return 0; }
