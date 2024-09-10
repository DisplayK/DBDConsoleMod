#pragma once

#include "CoreMinimal.h"
#include "RespawningEventComponent.h"
#include "Anniversary2021EventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAnniversary2021EventComponent : public URespawningEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UInteractionRespawnableTrigger* _interactionRespawnableTrigger;

	UPROPERTY(Transient, Export)
	UTimedRespawnableTrigger* _timedRespawnableTrigger;

private:
	UFUNCTION()
	void Authority_OnIntroComplete();

public:
	UAnniversary2021EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAnniversary2021EventComponent) { return 0; }
