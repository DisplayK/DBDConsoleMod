#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "NearMeEvaluatorCondition.generated.h"

UCLASS()
class UNearMeEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _questOwnerCanBeSubjectOfEvent;

public:
	UNearMeEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNearMeEvaluatorCondition) { return 0; }
