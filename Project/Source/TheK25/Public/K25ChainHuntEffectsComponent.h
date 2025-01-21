#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K25ChainHuntEffectsComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25ChainHuntEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOwningPlayer() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerChainHuntActivationSFX();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DeactivateChainHuntEffects();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateChainHuntEffects(const bool hasChainHuntStarted);

public:
	UK25ChainHuntEffectsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainHuntEffectsComponent) { return 0; }
