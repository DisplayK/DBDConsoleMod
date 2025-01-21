#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasModifierOfTypeEvaluatorCondition.generated.h"

UCLASS()
class UHasModifierOfTypeEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _gameplayModifierList;

public:
	UHasModifierOfTypeEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasModifierOfTypeEvaluatorCondition) { return 0; }
