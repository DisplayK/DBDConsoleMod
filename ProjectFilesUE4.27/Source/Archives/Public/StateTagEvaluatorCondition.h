#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "StateTagEvaluatorCondition.generated.h"

UCLASS()
class UStateTagEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _gameplayTag;

public:
	UStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UStateTagEvaluatorCondition) { return 0; }
