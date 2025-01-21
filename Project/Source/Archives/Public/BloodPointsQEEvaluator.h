#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "BloodPointsQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UBloodPointsQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UBloodPointsQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UBloodPointsQEEvaluator) { return 0; }
