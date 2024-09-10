#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "ChaseInBasementQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UChaseInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnEscapeChase(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnChaseStart(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnChaseEnd(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UChaseInBasementQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UChaseInBasementQEEvaluator) { return 0; }
