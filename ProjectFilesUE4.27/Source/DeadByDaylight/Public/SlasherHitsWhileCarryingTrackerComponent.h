#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "SlasherHitsWhileCarryingTrackerComponent.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class USlasherHitsWhileCarryingTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TSet<ACamperPlayer*> _campersHitDuringLastCarry;

private:
	UFUNCTION()
	void OnPostAttack(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnPickup(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnAttack(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	USlasherHitsWhileCarryingTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USlasherHitsWhileCarryingTrackerComponent) { return 0; }
