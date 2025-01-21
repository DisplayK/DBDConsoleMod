#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "K25Projectile.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "Engine/NetSerialization.h"
#include "K25ControlledProjectile.generated.h"

class UCameraComponent;
class UStaticMeshComponent;
class USpringArmComponent;
class UK25ControlledProjectileMovementComponent;

UCLASS()
class AK25ControlledProjectile : public AK25Projectile, public ISpectatingActorLinker
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _killerViewProjectileStaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USpringArmComponent* _killerSpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCameraComponent* _killerCameraPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _pitchClampAngle;

	UPROPERTY(EditAnywhere)
	FTunableStat _maximumYawTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTunableStat _maximumPitchTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _cameraRollSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _cameraRollGoBackSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _cameraMaximumRollDegree;

	UPROPERTY(EditAnywhere)
	FTunableStat _numbExtraChainsOnControlledProjectileHit;

private:
	UPROPERTY(Transient, Export)
	UK25ControlledProjectileMovementComponent* _controlledProjectileMovementComponent;

	UPROPERTY(Transient)
	float _currentRoll;

	UPROPERTY(Transient)
	float _targetRoll;

	UPROPERTY(ReplicatedUsing=OnRep_AngularVelocity)
	FVector_NetQuantize _lastAppliedAngularVelocity;

public:
	UFUNCTION(Server, Unreliable)
	void Server_ProcessYawInput(float deltaTime, float scaledInput);

	UFUNCTION(Server, Unreliable)
	void Server_ProcessPitchInput(float deltaTime, float scaledInput);

private:
	UFUNCTION()
	void OnRep_AngularVelocity();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerPossessProjectileEffects();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25ControlledProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK25ControlledProjectile) { return 0; }
