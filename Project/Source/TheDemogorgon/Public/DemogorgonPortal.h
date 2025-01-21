#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDGenericTeamAgentInterface.h"
#include "EDemogorgonPortalState.h"
#include "Engine/EngineTypes.h"
#include "DemogorgonPortal.generated.h"

class UParticleSystem;
class UChargeableComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class UAkAudioEvent;
class UAIPerceptionStimuliSourceComponent;
class AActor;

UCLASS()
class THEDEMOGORGON_API ADemogorgonPortal : public AInteractable, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _portalAreaCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _destroyChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _teleportChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EDemogorgonPortalState _portalState;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _portalIdleSound;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _portalDestroyingStart;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _portalTeleportingSound;

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* _destroyParticleSystem;

	UPROPERTY(EditDefaultsOnly)
	float _destroyDuration;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _destroyingPlayers;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void TriggerDirtExplosion();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ShowPortalTeleportInteractionStartVFX();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ShowPortalActiveVFX();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void RemovePortalTeleportInteractionStartVFX();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void RemovePortalActiveVFX();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void PlaySoundFromPortal(UAkAudioEvent* soundEvent);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown);

	UFUNCTION(BlueprintImplementableEvent)
	void OnTargetedChanged();

	UFUNCTION(BlueprintImplementableEvent)
	void OnPortalStateChanged(EDemogorgonPortalState state);

	UFUNCTION(BlueprintCallable)
	void OnPortalDestroyed(ADBDPlayer* player);

protected:
	UFUNCTION()
	void OnEndOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnBeginOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void MakePortalDisappearVFX();

public:
	UFUNCTION(BlueprintPure)
	bool IsTargeted() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_StopDestroyingPlayers();

	UFUNCTION()
	void Authority_OnTeleportChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

	UFUNCTION()
	void Authority_OnDestroyChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	ADemogorgonPortal();
};

FORCEINLINE uint32 GetTypeHash(const ADemogorgonPortal) { return 0; }
