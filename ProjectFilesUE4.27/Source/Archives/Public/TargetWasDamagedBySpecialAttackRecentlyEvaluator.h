#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetWasDamagedBySpecialAttackRecentlyEvaluator.generated.h"

UCLASS()
class UTargetWasDamagedBySpecialAttackRecentlyEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _timeLimit;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _specialCaseGameEvents;

public:
	UTargetWasDamagedBySpecialAttackRecentlyEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetWasDamagedBySpecialAttackRecentlyEvaluator) { return 0; }
