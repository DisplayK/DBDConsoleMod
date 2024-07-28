#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "ItemPerformedQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemPerformedQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UItemPerformedQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UItemPerformedQEEvaluator) { return 0; }
