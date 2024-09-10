#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "NearGameObjectEvaluatorCondition.generated.h"

UCLASS()
class UNearGameObjectEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UNearGameObjectEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNearGameObjectEvaluatorCondition) { return 0; }
