#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EConditionSubject.h"
#include "EvaluatorCondition.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UEvaluatorCondition : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	EConditionSubject _conditionSubject;

public:
	UEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UEvaluatorCondition) { return 0; }
