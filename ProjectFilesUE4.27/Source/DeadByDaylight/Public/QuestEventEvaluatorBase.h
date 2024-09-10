#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EConditionNeedsType.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.generated.h"

class ADBDPlayer;
class UEvaluatorCondition;

UCLASS()
class DEADBYDAYLIGHT_API UQuestEventEvaluatorBase : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	ADBDPlayer* _dbdPlayer;

	UPROPERTY(EditDefaultsOnly)
	EConditionNeedsType _conditionNeedsType;

private:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UEvaluatorCondition>> _evaluatorConditionsClass;

	UPROPERTY(Transient)
	TArray<UEvaluatorCondition*> _evaluatorConditions;

protected:
	UFUNCTION()
	void OnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UQuestEventEvaluatorBase();
};

FORCEINLINE uint32 GetTypeHash(const UQuestEventEvaluatorBase) { return 0; }
