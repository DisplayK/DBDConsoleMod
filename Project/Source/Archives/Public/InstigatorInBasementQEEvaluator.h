#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "InstigatorInBasementQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UInstigatorInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UInstigatorInBasementQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UInstigatorInBasementQEEvaluator) { return 0; }
