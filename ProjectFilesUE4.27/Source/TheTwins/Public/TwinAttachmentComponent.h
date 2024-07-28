#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "FastTimer.h"
#include "AnimationMontageDescriptor.h"
#include "TwinAttachmentComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinAttachmentComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_AttachedPlayer)
	ADBDPlayer* _attachedPlayer;

	UPROPERTY(Transient, Export)
	UStatusEffect* _gateBlockerStatusEffect;

	UPROPERTY(Transient)
	bool _hasBeenDetachedBySurvivorDamageChanged;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cantEscapeByGateLingerDuration;

	UPROPERTY(Transient)
	TMap<ADBDPlayer*, FFastTimer> _escapeBlockerLingerTimers;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _notCancelableInteractionTags;

private:
	UFUNCTION()
	void OnRep_AttachedPlayer(ADBDPlayer* oldAttachedPlayer);

	UFUNCTION()
	void OnMoriMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted);

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);

	UFUNCTION()
	void OnAttachedSurvivorDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_QuickDestroyTwin();

public:
	UFUNCTION(BlueprintPure)
	bool IsAttachedToSurvivor() const;

	UFUNCTION(BlueprintPure)
	bool IsAttachedToSister() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinDetachedFromSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinDetachedFromSister(ADBDPlayer* sister, ADBDPlayer* brother);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinAttachedToSurvivor(ADBDPlayer* survivor, ADBDPlayer* brother);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTwinAttachedToSister(ADBDPlayer* sister, ADBDPlayer* brother, bool isFirstAttachment);

private:
	UFUNCTION()
	void Authority_OnRemoveTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTwinAttachmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinAttachmentComponent) { return 0; }
