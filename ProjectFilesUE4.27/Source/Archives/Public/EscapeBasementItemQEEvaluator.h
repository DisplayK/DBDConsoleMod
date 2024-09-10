#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EscapeBasementItemQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UEscapeBasementItemQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnTargetEscapeFromTrial(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnItemCollectedFromChest(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UEscapeBasementItemQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeBasementItemQEEvaluator) { return 0; }
