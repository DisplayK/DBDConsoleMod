#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "K28TeleportTarget.h"
#include "StunnableInterface.h"
#include "GameFramework/Actor.h"
#include "AnimationMontageDescriptor.h"
#include "DBDGenericTeamAgentInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EK28RemnantState.h"
#include "K28Remnant.generated.h"

class UCurveFloat;
class UCapsuleComponent;
class UAnimationMontageSlave;
class USkeletalMeshComponent;
class UMontagePlayer;
class UAIPerceptionStimuliSourceComponent;
class UDBDOutlineComponent;
class UK28RemnantOutlineUpdateStrategy;
class ASlasherPlayer;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS()
class AK28Remnant : public AActor, public IK28TeleportTarget, public IStunnableInterface, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _teleportToRemnantSpeedCurve_Normal;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _teleportToRemnantSpeedCurve_Penalty;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _capsuleComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(VisibleAnywhere, Export)
	UMontagePlayer* _montagePlayer;

	UPROPERTY(VisibleAnywhere, Export)
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UK28RemnantOutlineUpdateStrategy* _remnantOutlineStrategy;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportationFadeInTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportationFadeOutTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromHookedSurvivor;

	UPROPERTY(EditDefaultsOnly)
	float _renmantDeactivationTime;

	UPROPERTY(EditDefaultsOnly)
	float _remnantDestructionTime;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _slowTeleportToRenmantAnimationMontage;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _fastTeleportToRenmantAnimationMontage;

	UPROPERTY(ReplicatedUsing=OnRep_RemnantState)
	EK28RemnantState _remnantState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

private:
	UFUNCTION()
	void OnRep_RemnantState();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TriggerTeleportStart(ASlasherPlayer* killer);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportToRemnant(ASlasherPlayer* killer, const FRotator& teleportRotation, bool isAnimationSlowed);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SurvivorDestroyedRemnant(ACamperPlayer* survivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DeactivateRemnant();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ActivateRemnant(const FVector& location, const FRotator& rotation);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorDestroyedRemnant(ACamperPlayer* survivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportationStartVFX(ASlasherPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportationPerformedVFX(ASlasherPlayer* killer, bool isSlowTeleportation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemnantStateChanged(EK28RemnantState remnantState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemnantDeactivated();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemnantActivated();

private:
	UFUNCTION()
	void Authority_OnCollisionDetected(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28Remnant();
};

FORCEINLINE uint32 GetTypeHash(const AK28Remnant) { return 0; }
