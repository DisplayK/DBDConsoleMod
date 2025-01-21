#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "IsInteractingEvaluatorCondition.generated.h"

UCLASS()
class UIsInteractingEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UIsInteractingEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsInteractingEvaluatorCondition) { return 0; }
