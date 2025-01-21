#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "SurvivorNearMeEvaluatorCondition.generated.h"

UCLASS()
class USurvivorNearMeEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	USurvivorNearMeEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorNearMeEvaluatorCondition) { return 0; }
