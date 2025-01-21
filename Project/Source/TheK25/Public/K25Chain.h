#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EK25ChainState.h"
#include "EK25ChainDetachmentReason.h"
#include "DBDTunableRowHandle.h"
#include "FastTimer.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "UObject/NoExportTypes.h"
#include "EK25ChainCreationStrategy.h"
#include "K25Chain.generated.h"

class AK25Projectile;
class UCurveFloat;
class AK25SurvivorChainAttachmentAnchor;
class USplineComponent;
class UInstancedStaticMeshComponent;

UCLASS()
class AK25Chain : public AActor, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _attachedToProjectileInfluenceCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _reelbackInfluenceCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _offsetMultiplierInfluenceCurve;

protected:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _reelingBackSpeed;

	UPROPERTY(EditAnywhere)
	float _chainOffsetMinValue;

	UPROPERTY(EditAnywhere)
	float _chainOffsetMaxValue;

	UPROPERTY(EditAnywhere)
	float _reelbackChainOffsetMinValue;

	UPROPERTY(EditAnywhere)
	float _reelbackChainOffsetMaxValue;

	UPROPERTY(EditAnywhere)
	float _chainInstanceSpacing;

	UPROPERTY(EditAnywhere)
	float _quickChainOffsetTimerLength;

	UPROPERTY(EditAnywhere)
	float _reachingSurvivorAnchorTime;

	UPROPERTY(EditAnywhere)
	FVector _chainScale;

	UPROPERTY(EditAnywhere)
	float _chainOffsetTimerLength;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FVector> _currentChainPoints;

private:
	UPROPERTY(Transient)
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere)
	float _sphereTraceRadius;

	UPROPERTY(Transient)
	FVector _chainStartPosition;

	UPROPERTY(Transient)
	FVector _reelBackPosition;

	UPROPERTY(Transient)
	FVector _reelbackStartPosition;

	UPROPERTY(Transient)
	AK25Projectile* _projectileAttachedTo;

	UPROPERTY(Transient)
	TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor> _survivorAnchorAttachedTo;

	UPROPERTY(Transient)
	TWeakObjectPtr<AK25SurvivorChainAttachmentAnchor> _targetAnchorToReach;

	UPROPERTY(EditAnywhere, Export)
	USplineComponent* _chainSplineComponent;

	UPROPERTY(EditAnywhere, Export)
	UInstancedStaticMeshComponent* _chainInstancedMesh;

	UPROPERTY(Transient)
	UCurveFloat* _currentInfluenceCurve;

	UPROPERTY(Transient)
	FVector _chainCurveOffset;

	UPROPERTY(Transient)
	EK25ChainState _chainState;

	UPROPERTY(Transient)
	FFastTimer _curveOffsetStrengthTimer;

	UPROPERTY(Transient)
	FFastTimer _reelbackTimer;

	UPROPERTY(Transient)
	FFastTimer _reachSurvivorAnchorPositionTimer;

	UPROPERTY(Transient)
	TArray<FVector> _forcedPositions;

	UPROPERTY(Transient)
	EK25ChainCreationStrategy _chainCreationStrategy;

public:
	UFUNCTION(BlueprintCallable)
	void SetSplineComponent(USplineComponent* component);

	UFUNCTION(BlueprintCallable)
	void SetInstancedMeshComponent(UInstancedStaticMeshComponent* instancedMesh);

protected:
	UFUNCTION(BlueprintPure)
	bool IsAttachedToControlledProjectile() const;

public:
	UFUNCTION(BlueprintPure)
	AK25SurvivorChainAttachmentAnchor* GetSurvivorChainAttachmentAnchor() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainStartLocation() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainEndLocation() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorStartedRemovingChainSFX();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainUnleashedWithProjectile();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainStartedToReelback();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainDisappears();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainDetachedFromSurvivor(EK25ChainDetachmentReason detachmentReason);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainAppears();

public:
	AK25Chain();
};

FORCEINLINE uint32 GetTypeHash(const AK25Chain) { return 0; }
