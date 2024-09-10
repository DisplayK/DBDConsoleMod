#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RespawningEventComponent.h"
#include "GameEventData.h"
#include "GnomeEventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGnomeEventComponent : public URespawningEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UInteractionRespawnableTrigger* _interactionRespawnableTrigger;

	UPROPERTY(Transient, Export)
	UTimedRespawnableTrigger* _timedRespawnableTrigger;

private:
	UFUNCTION()
	void Authority_OnEndGameStarted(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UGnomeEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGnomeEventComponent) { return 0; }
