#pragma once

#include "CoreMinimal.h"
#include "RespawnableTrigger.h"
#include "InteractionRespawnableTrigger.generated.h"

class URespawningEventComponent;
class ARespawnableInteractable;

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UInteractionRespawnableTrigger : public URespawnableTrigger
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	URespawningEventComponent* _respawningEventComponent;

public:
	UFUNCTION()
	void Authority_OnNewRespawnableSubscribed(ARespawnableInteractable* newRespawnableInteractable);

	UFUNCTION()
	void Authority_OnInteractionEnded(ARespawnableInteractable* respawnableInteractable);

public:
	UInteractionRespawnableTrigger();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionRespawnableTrigger) { return 0; }
