#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "TargetIsObsessionQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UTargetIsObsessionQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UTargetIsObsessionQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetIsObsessionQEEvaluator) { return 0; }
