#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "ItemConsumedQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnItemConsumed(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UItemConsumedQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UItemConsumedQEEvaluator) { return 0; }
