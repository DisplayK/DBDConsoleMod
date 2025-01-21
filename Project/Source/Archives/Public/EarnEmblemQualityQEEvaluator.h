#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EarnEmblemQualityQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UEarnEmblemQualityQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEarnEmblemQualityQEEvaluator) { return 0; }
