#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseIsPlayerPerformingInteraction.h"
#include "ELoadoutItemType.h"
#include "IsPlayerPerfInteractionWithNoItem.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _useItemInteractionSemantics;

	UPROPERTY(EditDefaultsOnly)
	ELoadoutItemType _itemType;

private:
	UFUNCTION()
	void OnCollectableChargeStateChange(bool empty);

public:
	UIsPlayerPerfInteractionWithNoItem();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerPerfInteractionWithNoItem) { return 0; }
