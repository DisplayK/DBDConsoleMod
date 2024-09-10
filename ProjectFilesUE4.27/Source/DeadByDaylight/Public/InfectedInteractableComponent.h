#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InfectedInteractableComponent.generated.h"

class ACamperPlayer;
class AInteractable;
class UTimelineComponent;
class ADBDPlayer;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInfectedInteractableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* VomitAlphaCurve;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName VomitAlphaParameterName;

private:
	UPROPERTY(Transient, Export)
	UTimelineComponent* _vomitAlphaTimeline;

protected:
	UFUNCTION(BlueprintCallable)
	void SetInteractableMeshAlpha(float alpha);

	UFUNCTION(BlueprintImplementableEvent)
	void OnVomitAlphaUpdate(float alpha);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FadeOutVomit();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FadeInVomit();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DestroyComponent();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DebugDisplayLifetime(float remainingLifetime);

protected:
	UFUNCTION(BlueprintPure)
	AInteractable* GetOwningInteractable() const;

public:
	UFUNCTION()
	void Authority_OnOwningInteractableBeginOrEndUse(bool inUse, ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnHitWithVomit();

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	bool Authority_IsAMaxSicknessSurvivorInteracting() const;

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	ACamperPlayer* Authority_GetEquippingPlayer() const;

public:
	UInfectedInteractableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInfectedInteractableComponent) { return 0; }
