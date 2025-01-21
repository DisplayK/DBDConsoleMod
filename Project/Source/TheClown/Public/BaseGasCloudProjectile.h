#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "PhysicsBasedProjectile.h"
#include "Engine/EngineTypes.h"
#include "EBombType.h"
#include "BaseGasCloudProjectile.generated.h"

class UActiveGasCloudTrackerComponent;
class ACamperPlayer;
class USpherePlayerOverlapComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UPoolableProjectileComponent;
class USphereComponent;
class AActor;

UCLASS()
class ABaseGasCloudProjectile : public APhysicsBasedProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBombType _gasType;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPoolableProjectileComponent* _poolableProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudBounciness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _dissipateGasCloudTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudMinimumLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudSimpleCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudComplexCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudSurvivorDetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudDetectionDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudCosmeticFadeDuration;

	UPROPERTY(BlueprintReadWrite, Transient)
	float _overlappingTime;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool _dissipating;

	UPROPERTY(BlueprintReadWrite, Transient)
	TArray<ACamperPlayer*> _overlappingSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UParticleSystemComponent* _gasParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _simpleCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _complexCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USpherePlayerOverlapComponent* _survivorDetector;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UActiveGasCloudTrackerComponent* _activeGasCloudTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag _cloudSizeModifierTag;

private:
	UPROPERTY(Transient)
	float _cumulativeLifetime;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsDissipating(bool isDissipating);

private:
	UFUNCTION()
	void SetIgnoredActors();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetGasAudioActive(bool activated);

public:
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnDelayedActivationStart(float delay);

private:
	UFUNCTION()
	void OnAcquiredChanged(bool acquired);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DissipateGasCloud();

	UFUNCTION(BlueprintPure)
	bool IsSurvivorDetectionEnabled();

	UFUNCTION(BlueprintPure)
	bool IsDissipating();

	UFUNCTION(BlueprintCallable)
	EBombType GetGasType();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DissipateGasCloud();

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetCumulativeLifetime(const float value);

public:
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	float Authority_GetCumulativeLifetime() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ActivateCosmetic_BP();

public:
	ABaseGasCloudProjectile();
};

FORCEINLINE uint32 GetTypeHash(const ABaseGasCloudProjectile) { return 0; }
