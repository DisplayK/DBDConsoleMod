#pragma once

#include "CoreMinimal.h"
#include "FakeKillerHuskInterface.h"
#include "Collectable.h"
#include "EPowerState.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K30Power.generated.h"

class UK30PowerPresentationComponent;
class UFloatingCameraNavigationComponent;
class UPatrolTrailComponent;
class UInteractor;
class UDrawPatrolPathInteraction;
class AKnightGuard;
class AGuardSlowingZone;
class UKnightOrderComponent;
class UStatusEffect;
class APoseableHusk;
class AGuardPalletSlowingZone;
class UPlayerInteractionHandler;
class UK30SurvivorStatusComponent;
class UGuardPullSurvivorOutOfLocker;
class AActor;
class UPrimitiveComponent;

UCLASS()
class AK30Power : public ACollectable, public IFakeKillerHuskInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPowerStateChanged, EPowerState, previousState, EPowerState, newState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoriStateChanged);

public:
	UPROPERTY(BlueprintAssignable)
	FOnMoriStateChanged OnMoriBegin;

	UPROPERTY(BlueprintAssignable)
	FOnMoriStateChanged OnMoriEnd;

	UPROPERTY(BlueprintAssignable)
	FOnPowerStateChanged OnPowerStateChanged;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UInteractor* _interactor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDrawPatrolPathInteraction* _drawPathInteraction;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UKnightOrderComponent* _orderComponent;

private:
	UPROPERTY(Replicated)
	TArray<AKnightGuard*> _guards;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AKnightGuard>> _guardClasses;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _drawPathStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hideSurvivorVFXEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _immuneToBlindEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<APoseableHusk> _knightHuskClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGuardPalletSlowingZone> _palletSlowingZoneClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGuardSlowingZone> _vaultSlowingZoneClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK30SurvivorStatusComponent> _k30SurvivorStatusComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGuardPullSurvivorOutOfLocker> _pullSurvivorOutOfLockerInteractionClass;

	UPROPERTY(ReplicatedUsing=OnRep_KnightHusk, Transient)
	APoseableHusk* _knightHusk;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _drawPathIndicatorClass;

	UPROPERTY(Transient)
	AActor* _drawPathIndicator;

	UPROPERTY(Transient, Export)
	UPatrolTrailComponent* _patrolTrailComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UFloatingCameraNavigationComponent* _floatingCameraNavigationComponent;

	UPROPERTY(Transient, Export)
	UK30PowerPresentationComponent* _powerPresentationComponent;

	UPROPERTY(Transient, Export)
	UPlayerInteractionHandler* _interactionHandler;

	UPROPERTY(Replicated)
	uint8 _currentGuardIndex;

	UPROPERTY(Replicated)
	uint8 _nextGuardIndex;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lookAtPreviewSpeed;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maxPathLength;

	UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
	float _remainingPathLengthPercent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerReadyDelay;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _isVisibleDuringPathCreationModeTags;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pathCreationModeOverFadeInTime;

	UPROPERTY(EditDefaultsOnly)
	float _enableInteractionAfterTeleportationDelay;

private:
	UFUNCTION(Server, Reliable)
	void Server_OnSnappingStateChanged(bool isSnapping);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SendPathNearlyEndingWarning();

private:
	UFUNCTION()
	void OnRep_KnightHusk();

	UFUNCTION()
	void OnOrderTargetChanged();

public:
	UFUNCTION()
	void OnInteractionStateChanged(bool isCharging, bool isChargeCompleted);

private:
	UFUNCTION()
	void OnEndOverlapWindow(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSnappingStateChanged(bool isSnapping);

public:
	UFUNCTION(BlueprintPure)
	bool IsSnapping() const;

	UFUNCTION(BlueprintPure)
	bool IsDrawingPath() const;

	UFUNCTION(BlueprintPure)
	bool IsChargingPower() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateRemainingPathLength(float remainingPathLengthPercent);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPathDrawAvailableEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPathDrawAvailableBegin();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK30Power();
};

FORCEINLINE uint32 GetTypeHash(const AK30Power) { return 0; }
