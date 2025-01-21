#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "HasStatusEffectEvaluatorCondition.generated.h"

UCLASS()
class UHasStatusEffectEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FName> _statusEffectList;

public:
	UHasStatusEffectEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasStatusEffectEvaluatorCondition) { return 0; }
