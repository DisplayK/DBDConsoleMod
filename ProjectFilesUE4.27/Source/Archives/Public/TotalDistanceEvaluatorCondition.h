#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "TotalDistanceEvaluatorCondition.generated.h"

UCLASS()
class UTotalDistanceEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _startTimerEvents;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _endTimerEvents;

public:
	UTotalDistanceEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UTotalDistanceEvaluatorCondition) { return 0; }
