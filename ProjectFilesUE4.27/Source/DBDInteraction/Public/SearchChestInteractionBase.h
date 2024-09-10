#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "SearchChestInteractionBase.generated.h"

class ADBDPlayer;
class ASearchable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USearchChestInteractionBase : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	bool _handleCompletionScoreEvents;

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _searchableCompleteContributionPercentTag;

	UPROPERTY(Transient)
	bool _scoreEventFired;

	UPROPERTY(Transient)
	ASearchable* _owningChest;

	UPROPERTY(Transient)
	bool _onLastInteractionWasComplete;

private:
	UFUNCTION(BlueprintCallable)
	void FireChestScoreEvent(const ADBDPlayer* player);

public:
	USearchChestInteractionBase();
};

FORCEINLINE uint32 GetTypeHash(const USearchChestInteractionBase) { return 0; }
