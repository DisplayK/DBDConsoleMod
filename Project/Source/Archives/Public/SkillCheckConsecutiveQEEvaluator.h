#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "SkillCheckConsecutiveQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API USkillCheckConsecutiveQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnSkillCheckSuccess(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnSkillCheckFail(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	USkillCheckConsecutiveQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USkillCheckConsecutiveQEEvaluator) { return 0; }
