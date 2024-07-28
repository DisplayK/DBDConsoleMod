#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "HasItemTypeQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHasItemTypeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UHasItemTypeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemTypeQEEvaluator) { return 0; }
