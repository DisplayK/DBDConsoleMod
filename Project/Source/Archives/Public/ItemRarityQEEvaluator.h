#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "ItemRarityQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemRarityQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UItemRarityQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UItemRarityQEEvaluator) { return 0; }
