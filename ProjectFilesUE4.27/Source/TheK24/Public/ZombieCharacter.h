#pragma once

#include "CoreMinimal.h"
#include "SlashableInterface.h"
#include "GameFramework/Character.h"
#include "EZombieState.h"
#include "DynamicGrassEffectorInterface.h"
#include "PushableInterface.h"
#include "TunableStat.h"
#include "EZombieGender.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "EAttackType.h"
#include "FirecrackerEffectData.h"
#include "ZombieCharacter.generated.h"

class UAuthoritativePoolableActorComponent;
class UZombieBlindableComponent;
class USphereComponent;
class UStaticMeshComponent;
class USkeletalMesh;
class UFirecrackerEffectHandlerComponent;
class ASlasherPlayer;
class UChargeableComponent;
class UFlashlightableComponent;
class UGameplayTagContainerComponent;
class UCharacterPositionRecorderComponent;
class UAuthoritativeMovementComponent;
class UOtherCharactersVerticalCollisionsHandler;
class AActor;
class UPrimitiveComponent;
class UFlashlightComponent;

UCLASS()
class AZombieCharacter : public ACharacter, public IDynamicGrassEffectorInterface, public ISlashableInterface, public IPushableInterface, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _zombieWalkSpeed;

private:
	UPROPERTY(Export)
	UAuthoritativePoolableActorComponent* _poolableComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	USphereComponent* _zombieAttackDetector;

	UPROPERTY(EditDefaultsOnly, Export)
	UStaticMeshComponent* _attackDamageZone;

	UPROPERTY(ReplicatedUsing=OnRep_ZombieState)
	EZombieState _zombieState;

	UPROPERTY(EditAnywhere)
	FTunableStat _zombieRespawnTimeKilledBySlasher;

	UPROPERTY(EditAnywhere)
	FTunableStat _zombieRespawnTimeKilledBySurvivor;

	UPROPERTY(Transient)
	FTransform _respawnPositionBehindGate;

	UPROPERTY(ReplicatedUsing=OnRep_ZombieGender)
	EZombieGender _zombieGender;

	UPROPERTY(EditDefaultsOnly)
	USkeletalMesh* _femaleSkeletalMesh;

	UPROPERTY(EditDefaultsOnly, Replicated)
	FString _audioSwitchState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UZombieBlindableComponent* _blindableComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UChargeableComponent* _blindingChargeableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UFlashlightableComponent* _flashLightableComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieStunBaseTime;

	UPROPERTY(Export)
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UCharacterPositionRecorderComponent* _positionRecorder;

	UPROPERTY(Transient, Export)
	UAuthoritativeMovementComponent* _authoritativeMovementComponent;

	UPROPERTY(Transient, Export)
	UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler;

	UPROPERTY(Transient)
	TArray<AActor*> _ignoreActors;

	UPROPERTY(EditDefaultsOnly)
	float _zombieStunnedCapsuleRadius;

	UPROPERTY(EditAnywhere)
	float _minFallHeight;

	UPROPERTY(EditAnywhere)
	float _afterInAirAttackCooldown;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ZombieKilledByKiller_Cosmetic(EAttackType attackType);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void SetCharacterActive_Cosmetic(const bool value);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnZombieStateChanged_Cosmetic(EZombieState zombieState);

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* slasher);

	UFUNCTION()
	void OnRep_ZombieState(EZombieState previousState);

	UFUNCTION()
	void OnRep_ZombieGender();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnFemaleGenderSet_Cosmetic();

private:
	UFUNCTION()
	void OnEndOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnBeginOverlapZombieAttackDetector(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_ZombieKilledByKillerCosmetic(EAttackType attackType);

public:
	UFUNCTION(BlueprintPure)
	EZombieGender GetZombieGender() const;

	UFUNCTION(BlueprintPure)
	UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler() const;

	UFUNCTION(BlueprintPure)
	UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent() const;

protected:
	UFUNCTION(BlueprintPure)
	FString GetAudioSwitchState() const;

private:
	UFUNCTION()
	void Authority_OnZombieStateChanged(EZombieState zombieState);

	UFUNCTION()
	void Authority_OnFlashlightRemoved(const UFlashlightComponent* flashlight);

	UFUNCTION()
	void Authority_OnFlashlightAdded(const UFlashlightComponent* flashlight);

	UFUNCTION()
	void Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData);

	UFUNCTION()
	void Authority_DeactivateZombieAndStartRespawnTimer();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AZombieCharacter();
};

FORCEINLINE uint32 GetTypeHash(const AZombieCharacter) { return 0; }
