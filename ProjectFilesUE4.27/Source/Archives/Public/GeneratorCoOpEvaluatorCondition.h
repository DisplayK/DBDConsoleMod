#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GeneratorCoOpEvaluatorCondition.generated.h"

UCLASS()
class UGeneratorCoOpEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UGeneratorCoOpEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorCoOpEvaluatorCondition) { return 0; }
