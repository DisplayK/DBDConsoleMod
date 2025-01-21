#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "ScreamSpecialCaseQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UScreamSpecialCaseQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UScreamSpecialCaseQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UScreamSpecialCaseQEEvaluator) { return 0; }
