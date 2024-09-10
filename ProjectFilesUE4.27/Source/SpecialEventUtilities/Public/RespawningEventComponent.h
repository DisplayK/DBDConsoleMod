#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RespawningEventComponent.generated.h"

class URespawnableStrategy;
class URespawnablePositioner;
class ARespawnableInteractable;

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawningEventComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	URespawnableStrategy* _respawnableStrategy;

private:
	UPROPERTY(Transient, Export)
	URespawnablePositioner* _respawnablePositioner;

private:
	UFUNCTION(Exec)
	void DBD_ForceRespawnSpecialEventObject();

protected:
	UFUNCTION()
	void Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(ARespawnableInteractable* respawnableInteractable, bool isInteracting);

public:
	URespawningEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const URespawningEventComponent) { return 0; }
