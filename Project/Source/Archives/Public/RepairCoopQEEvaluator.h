#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "RepairCoopQEEvaluator.generated.h"

UCLASS()
class URepairCoopQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	URepairCoopQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const URepairCoopQEEvaluator) { return 0; }
