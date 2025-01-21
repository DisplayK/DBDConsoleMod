#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "HasItemNoChargesQEEvaluator.generated.h"

UCLASS()
class UHasItemNoChargesQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UHasItemNoChargesQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemNoChargesQEEvaluator) { return 0; }
