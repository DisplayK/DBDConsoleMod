#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "AIPointOfInterestTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "DeathBedInteractable.generated.h"

class UBoxComponent;
class UChargeableComponent;
class ACamperPlayer;
class UAIPerceptionStimuliSourceComponent;
class UMontagePlayer;
class USkeletalMeshComponent;
class USceneComponent;
class UDeathBedAntiCampComponent;
class UAnimationMontageSlave;
class UAnimMontage;
class UPrimitiveComponent;
class AActor;
class ADeathBedInteractable;

UCLASS()
class THEEXECUTIONER_API ADeathBedInteractable : public AInteractable, public IAIInteractableTargetInterface, public IAIPointOfInterestTargetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _root;

	UPROPERTY(Transient)
	ACamperPlayer* _inDeathBedCamper;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _rescueChargeableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _deathBedSkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _interactionZone;

	UPROPERTY(VisibleAnywhere, Export)
	UBoxComponent* _playerOverlapZone;

	UPROPERTY(VisibleAnywhere, Export)
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditDefaultsOnly, Export)
	UBoxComponent* _deathBedCollision;

	UPROPERTY(Export)
	UAnimationMontageSlave* _animationMontageSlave;

	UPROPERTY(Transient)
	UAnimMontage* _montageToPlay;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _rescuerSnapPosition;

	UPROPERTY(EditDefaultsOnly, Export)
	UDeathBedAntiCampComponent* _deathBedAnticampComponent;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _anticampDrainCooldownTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

private:
	UFUNCTION(BlueprintCallable)
	void TeleportCamperToDeathBed();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void StartPlayerAbsorbedByGround();

	UFUNCTION(BlueprintCallable)
	void SetInDeathBedCamper(ACamperPlayer* camperPlayer);

private:
	UFUNCTION()
	void PlayerOverlapZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void PlayerOverlapZoneBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnSkillCheckFailed_Cosmetic();

private:
	UFUNCTION()
	void OnSkillCheckFailed();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnRescueCancelled();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnRelocateStart_Cosmetic();

public:
	UFUNCTION(BlueprintCallable)
	void OnDeathBedDeathEnd();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RelocateToOtherDeathBed(ADeathBedInteractable* deathBed, ACamperPlayer* camperPlayer);

public:
	UFUNCTION(BlueprintPure)
	FVector GetRescuerSnapPosition() const;

private:
	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetInDeathBedCamper() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void FX_SurvivorSavedFromDeathBed();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void FX_DeathBedAppear();

	UFUNCTION(BlueprintImplementableEvent)
	void DeathBedDisappear();

	UFUNCTION(BlueprintPure)
	bool CanRescueSurvivor() const;

private:
	UFUNCTION(BlueprintCallable)
	void ActivateDeathBed(const bool value);

public:
	ADeathBedInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ADeathBedInteractable) { return 0; }
