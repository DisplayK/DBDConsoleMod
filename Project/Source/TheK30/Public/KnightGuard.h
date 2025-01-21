#pragma once

#include "CoreMinimal.h"
#include "DBDPlayer.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "EGuardHuntEndReason.h"
#include "KnightGuard.generated.h"

class UGuardAttackableComponent;
class UGuardAttackComponent;
class AK30Power;
class ASlasherPlayer;
class USceneComponent;
class UGuardHuntComponent;
class AGuardFlag;
class UCapsuleComponent;
class UGuardPatrolComponent;
class AActor;
class AGuardController;
class UAnimationMontageSlave;

UCLASS()
class AKnightGuard : public ADBDPlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _attackZonePivot;

	UPROPERTY(EditDefaultsOnly)
	float _guardNoiseEventTimeInterval;

	UPROPERTY(EditDefaultsOnly)
	float _guardNoiseEventRange;

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsActive)
	bool _isActive;

	UPROPERTY(ReplicatedUsing=OnRep_OwningKiller)
	ASlasherPlayer* _owningKiller;

	UPROPERTY()
	AK30Power* _killerPower;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGuardFlag> _flagClass;

	UPROPERTY(Replicated)
	AGuardFlag* _guardFlag;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGuardAttackComponent> _attackComponentClass;

	UPROPERTY(Transient, Export)
	UGuardAttackComponent* _attackComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UGuardAttackableComponent* _attackableComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UCapsuleComponent* _attackableCapsule;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGuardHuntComponent> _huntComponentClass;

	UPROPERTY(Replicated, Export)
	UGuardHuntComponent* _huntComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGuardPatrolComponent> _patrolComponentClass;

	UPROPERTY(Replicated, Export)
	UGuardPatrolComponent* _patrolComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGuardController> _controllerClass;

	UPROPERTY(Export)
	UAnimationMontageSlave* _animationFollower;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _gravityScale;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _patrolMovementSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _patrolStartupDelay;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _patrolDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _huntMovementSpeed;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _huntDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _orderDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _flagActivationTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shouldInflictBleed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _spawningVisionRange;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _patrollingVisionRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _palletAndVaultsSlowedDownSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _palletAndVaultsSlowDownDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _immediateGeneratorRegressionPercent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _huntAuraVisibilityMinDistanceToKiller;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _guardHitSurvivorScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _guardDetectSurvivorScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _guardBreakInteractableEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _guardChaseEndedEvent;

	UPROPERTY(EditDefaultsOnly)
	FName _guardAnimTag;

	UPROPERTY()
	TSet<AActor*> _overlappingSurvivorsAndVaults;

private:
	UFUNCTION()
	void OnRep_OwningKiller();

	UFUNCTION()
	void OnRep_IsActive(bool previousIsActive);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPatrolEnded(ADBDPlayer* foundSurvivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnOrderEnded();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_CosmeticHuntEnded(EGuardHuntEndReason reason);

	UFUNCTION(BlueprintPure)
	UGuardPatrolComponent* GetPatrolComponent() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StopOverlappingVaultOrSurvivor();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartOverlappingVaultOrSurvivor();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowGuard();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPatrolStarted();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPatrolEnded(ADBDPlayer* foundSurvivor);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrderStarted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrderEnded();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHuntTeleportStarted(float duration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHuntEnded(EGuardHuntEndReason reason);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGuardVisionRadiusChanged(bool isVisible, float radius, float angle);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HuntChaseStarted();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideGuard();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AKnightGuard();
};

FORCEINLINE uint32 GetTypeHash(const AKnightGuard) { return 0; }
