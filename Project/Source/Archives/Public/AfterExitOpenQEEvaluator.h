#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "AfterExitOpenQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UAfterExitOpenQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnExitGateOpened(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UAfterExitOpenQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UAfterExitOpenQEEvaluator) { return 0; }
