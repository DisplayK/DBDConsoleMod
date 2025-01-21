#pragma once

#include "CoreMinimal.h"
#include "ESnowmanDestructionType.h"
#include "GameplayTagContainer.h"
#include "ESnowmanState.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "Engine/EngineTypes.h"
#include "SnowmanSpawnData.h"
#include "GameEventData.h"
#include "UObject/NoExportTypes.h"
#include "Snowman.generated.h"

class UInteractor;
class ACamperPlayer;
class UChargeableComponent;
class UDBDOutlineComponent;
class ADBDPlayer;
class ASlasherPlayer;
class USkeletalMeshComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class UBaseActorAttackableComponent;
class ASnowman;
class AActor;

UCLASS()
class SNOWMANWINTEREVENT_API ASnowman : public ARespawnableInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToRespawn;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _maxRespawnsAfterKillerAttackWhileOccupied;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToBeDestroyed;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _highFiveCooldown;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _attachToPlayerDelay;

	UPROPERTY(ReplicatedUsing=OnRep_SnowmanState, Transient)
	ESnowmanState _snowmanState;

	UPROPERTY(ReplicatedUsing=OnRep_SnowmanDestructionType, Transient)
	ESnowmanDestructionType _snowmanDestructionType;

	UPROPERTY(ReplicatedUsing=OnRep_PlayerUsingSnowman, Transient)
	ADBDPlayer* _playerUsingThisSnowman;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _snowmanSkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _snowmanOutlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _snowmanCapsule;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _snowmanHandCapsule;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _hideInSnowmanInteractionChargeable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _snowmanInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _snowmanInteractionZone;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBaseActorAttackableComponent* _attackableComponent;

	UPROPERTY(Transient)
	bool _isAcquiredFromPool;

	UPROPERTY(ReplicatedUsing=OnRep_IsMoving, Transient)
	bool _isMoving;

	UPROPERTY(ReplicatedUsing=OnRep_HighFiveFollower, Transient)
	ASnowman* _highFiveFollower;

private:
	UFUNCTION()
	void OnRep_SnowmanState();

	UFUNCTION()
	void OnRep_SnowmanDestructionType();

	UFUNCTION()
	void OnRep_PlayerUsingSnowman();

	UFUNCTION()
	void OnRep_IsMoving();

	UFUNCTION()
	void OnRep_HighFiveFollower();

public:
	UFUNCTION()
	void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller, ADBDPlayer* playerInSnowman);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SpawnSnowman(FSnowmanSpawnData spawnData);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetSnowmanMaterialVariant(const int32 materialVariantIndex);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetSnowmanHiddenInGame(bool isHidden);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingUsedByKiller(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingControlledByKiller(ASlasherPlayer* killerUsingSnowman);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DrawDebugCollisionCheck(FVector boxExtent, float debugLifetime) const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetSnowmanMaterialVariant(const int32 materialVariantIndex);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingUsedByKiller(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingControlledByKiller(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanSpawned();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanHighFive(ASnowman* otherSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByKillerCancelExit();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByKillerAttackExit(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(ASlasherPlayer* killerAttackingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(ACamperPlayer* survivorUsingSnowman, ASlasherPlayer* killerAttackingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(ASlasherPlayer* killerAttackingSnowman);

private:
	UFUNCTION()
	void Authority_OnSnowmanHandOverlapEnd(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnSnowmanHandOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASnowman();
};

FORCEINLINE uint32 GetTypeHash(const ASnowman) { return 0; }
