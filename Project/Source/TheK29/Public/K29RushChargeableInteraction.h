#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "K29RushMovementSpeedSetting.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K29GuidedMovementInstance.h"
#include "EK29RushPhase.h"
#include "ECamperDamageState.h"
#include "K29RushChargeableInteraction.generated.h"

class UK29RushChargesHandlerComponent;
class UK29PowerStatusHandlerComponent;
class AK29Power;
class AActor;
class UK29PathingCalculatorComponent;
class UCurveFloat;
class UStatusEffect;
class UInteractionDefinition;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29RushChargeableInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UK29PowerStatusHandlerComponent* _powerStatusHandlerComponent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UK29PathingCalculatorComponent* _pathingCalculatorComponent;

	UPROPERTY(Transient)
	AK29Power* _powerCollectable;

	UPROPERTY(EditDefaultsOnly)
	TMap<EK29RushPhase, FK29RushMovementSpeedSetting> _movementSpeedSettingsByState;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _subsequentRushTimerTimeoutMovementSpeedMultiplierCurve;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _subsequentRushTimerTimeoutMovementSpeedReductionDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _subsequentRushOpportunityTimerDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _rushDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _rushDurationAfterFirst;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _capsuleRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _survivorRevealTimeOnInstantPickup;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _capsuleHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _capsuleHeightOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _bounceDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _rushAccelerationMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _instantCarryAnimationDuration;

	UPROPERTY(EditDefaultsOnly)
	float _percentageForRushChargeEndAvailability;

	UPROPERTY(EditDefaultsOnly)
	float _distanceInCmForNearMiss;

	UPROPERTY(EditDefaultsOnly)
	float _rushDetectionBackwardsOffset;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealToSurvivorsStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _rushMovementSpeedInCmPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _rushGrabMovementSpeedInCmPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _grabRushDuration;

	UPROPERTY(EditDefaultsOnly)
	float _rotationStrengthTransitionTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minimumRushDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _intoGrabbingTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _smashOutTimerDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _isStoppingMomentumAtIntoGrabbing;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _movementSpeedCurveBetweenRushesIncreased;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _movementSpeedCurveChargingIncreased;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _rushMovementSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _rushMovementSpeedCurveWithSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FName _killerRushSmashAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _survivorRushSmashAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _killerRushToCarryAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _survivorRushToCarryAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _survivorRushDropAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _killerRushCooldownAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _animTagFPV;

	UPROPERTY(EditDefaultsOnly)
	float _lagInSecondsUntilRushIsInvalid;

	UPROPERTY(EditDefaultsOnly)
	float _rushDropForwardDistance;

	UPROPERTY(EditDefaultsOnly)
	float _decisiveStrikeSkillCheckDelay;

	UPROPERTY(EditDefaultsOnly)
	bool _isLagChecked;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UInteractionDefinition>> _survivorInteractionPreventingGrab;

private:
	UFUNCTION(Server, Reliable)
	void Server_SlashAtSurvivor(ACamperPlayer* survivor, const FVector& currentKillerPosition);

	UFUNCTION(Server, Reliable)
	void Server_SetCurrentRushAsEndingInCollision(bool hitOtherSurvivor);

	UFUNCTION(Server, Reliable)
	void Server_SetCurrentRushAsEndingAtLedge();

	UFUNCTION(Server, Reliable)
	void Server_SetCurrentRush(const FK29GuidedMovementInstance& newRushInstance, const EK29RushPhase targetPhase);

	UFUNCTION(Server, Reliable)
	void Server_DestroyPalletOrBreakable(AActor* destroyable);

	UFUNCTION(Server, Reliable)
	void Server_DamageSurvivorAsCollision(ACamperPlayer* survivor, const FVector& currentKillerPosition);

	UFUNCTION(Server, Reliable)
	void Server_ChangeRushPhase(const EK29RushPhase newRushPhase, const bool forceLocallyControlled);

	UFUNCTION(Server, Reliable)
	void Server_CancelInteraction();

	UFUNCTION()
	void RushComplete(const bool rushEndedNaturally);

	UFUNCTION()
	void OnWindowOfOpportunityTimeoutCooldownEnd() const;

	UFUNCTION()
	void OnSubsequentRushOpportunityTimeout();

	UFUNCTION()
	void OnSmashOutTimerCompleted();

	UFUNCTION()
	void OnInstantCarryTimerComplete(ACamperPlayer* survivorToCarry);

	UFUNCTION()
	void OnGrabbingTransitionComplete();

	UFUNCTION()
	void OnCollisionEnableTimerComplete();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SmashSurvivor(ACamperPlayer* survivorToCarry);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SlashAtSurvivor(ACamperPlayer* survivor, const FVector& currentKillerPosition, const ECamperDamageState survivorTargetDamageState);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetCurrentRushAsEndingInCollision();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetCurrentRushAsEndingAtLedge();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetCurrentRush(const FK29GuidedMovementInstance& newRushInstance);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RushValid();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RushInvalid();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DestroyPalletOrBreakable(AActor* destroyable);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DamageSurvivorAsCollision(const FVector& currentKillerPosition, ACamperPlayer* collidedSurvivor, const ECamperDamageState survivorTargetDamageState);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ChangeRushPhase(const EK29RushPhase newRushPhase, const bool forceLocallyControlled);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_CarrySurvivor(ACamperPlayer* survivorToCarry);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_CancelInteraction();

public:
	UFUNCTION(BlueprintPure)
	float GetRushTimeLeft() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowEndIndicator(const FVector& endIndicatorLocation, const FRotator& forwardRotation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSlashAtSurvivor(ACamperPlayer* survivor, const ECamperDamageState survivorTargetDamageState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushPhaseChanged(EK29RushPhase previousPhase, EK29RushPhase newPhase);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChargeEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideEndIndicator();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DamageSurvivorAsCollision(ACamperPlayer* survivor, const ECamperDamageState survivorTargetDamageState);

private:
	UFUNCTION()
	void BounceComplete();

public:
	UK29RushChargeableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK29RushChargeableInteraction) { return 0; }
