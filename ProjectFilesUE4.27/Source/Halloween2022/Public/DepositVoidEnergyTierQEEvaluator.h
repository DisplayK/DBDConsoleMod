#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "DepositVoidEnergyTierQEEvaluator.generated.h"

UCLASS()
class UDepositVoidEnergyTierQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnVoidEnergyDeposited(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UDepositVoidEnergyTierQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UDepositVoidEnergyTierQEEvaluator) { return 0; }
