#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "CustomDistanceEvaluatorCondition.generated.h"

UCLASS()
class UCustomDistanceEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UCustomDistanceEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UCustomDistanceEvaluatorCondition) { return 0; }
