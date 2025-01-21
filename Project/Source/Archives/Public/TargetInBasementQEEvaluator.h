#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "TargetInBasementQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UTargetInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UTargetInBasementQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetInBasementQEEvaluator) { return 0; }
