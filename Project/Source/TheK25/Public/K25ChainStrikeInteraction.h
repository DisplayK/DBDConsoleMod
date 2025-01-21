#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "EChainStrikeEndReason.h"
#include "EChainStrikeCameraViewTarget.h"
#include "K25ChainStrikeInteraction.generated.h"

class UFiniteStateMachine;
class ASlasherPlayer;
class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ChainStrikeInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UFiniteStateMachine> _chainStrikeStateMachineclass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _repossessFadeOutTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _repossessFadeInTime;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _gatewayPossessionFovModifierCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _controlledProjectilePossessionFovModifierCurve;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _chargeTimeAfterGatewayPlacementCancelled;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _chargeTimeAfterGatewayPossessionCancelled;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _chargeTimeAfterControlledChainShot;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _gatewayPossessionFovChangeDuration;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _gatewayPossessionCameraPanTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _controlledProjectilePossessionCameraPanTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _controlledProjectilePossessionFovTimeChangeDuration;

private:
	UPROPERTY(Transient, Export)
	UFiniteStateMachine* _stateMachine;

	UPROPERTY(Transient)
	bool _authority_shouldIncrementChargeableComponent;

	UPROPERTY(ReplicatedUsing=OnRep_ChainStrikeCameraViewTarget, Transient)
	EChainStrikeCameraViewTarget _chainStrikeCameraViewTarget;

	UPROPERTY(Replicated)
	bool _hasHitSurvivor;

public:
	UFUNCTION(Server, Reliable)
	void Server_SetShouldIncrementChargeableComponent(bool shouldIncrement);

	UFUNCTION(Server, Reliable)
	void Server_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);

private:
	UFUNCTION(Server, Reliable)
	void Server_SetCameraViewTarget(EChainStrikeCameraViewTarget newViewTarget);

public:
	UFUNCTION(Server, Reliable)
	void Server_RemoveStateTagFromPlayer(FGameplayTag tag);

	UFUNCTION(Server, Reliable)
	void Server_AddStateTagToPlayer(FGameplayTag tag);

private:
	UFUNCTION()
	void OnRep_ChainStrikeCameraViewTarget();

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoveStateTagFromPlayer(FGameplayTag tag);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddStateTagToPlayer(FGameplayTag tag);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerKillerRepossessionFadeOutEffects(ASlasherPlayer* killer, const bool preventAudioTriggers);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerKillerRepossessionFadeInEffects(ASlasherPlayer* killer, const bool hasHitSurvivor, const bool preventAudioTriggers);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerInvalidGatewayPlacementSFX(ASlasherPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPossessionEffects(const float transitionTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ResetAllVignetteValues(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25ChainStrikeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeInteraction) { return 0; }
