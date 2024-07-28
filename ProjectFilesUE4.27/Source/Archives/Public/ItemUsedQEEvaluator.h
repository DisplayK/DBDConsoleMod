#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "ItemUsedQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemUsedQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnItemUsed(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UItemUsedQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UItemUsedQEEvaluator) { return 0; }
