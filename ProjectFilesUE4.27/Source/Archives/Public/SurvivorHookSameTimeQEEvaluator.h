#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "SurvivorHookSameTimeQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API USurvivorHookSameTimeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnSurvivorUnhooked(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnSurvivorHooked(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	USurvivorHookSameTimeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHookSameTimeQEEvaluator) { return 0; }
