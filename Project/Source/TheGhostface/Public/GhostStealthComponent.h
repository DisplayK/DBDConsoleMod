#pragma once

#include "CoreMinimal.h"
#include "NonTunableStat.h"
#include "GhostStealthUIData.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "EGhostStealthState.h"
#include "GhostStealthComponent.generated.h"

class UTimerObject;
class AScreenIndicatorWorldMarker;
class USightRevealableComponent;
class ACharacter;
class ADBDPlayer;
class UStalkerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UGhostStealthComponent : public UActorComponent, public IGhostStealthUIData
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessfulAttackInStealth, ADBDPlayer*, target);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStealthStateChanged, EGhostStealthState, stealthState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStealthCancelledByPlayer, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsStealthChanged, bool, isStealth);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsBeingSpotChanged, ADBDPlayer*, spotter, bool, isBeingSpot);

public:
	UPROPERTY(BlueprintAssignable)
	FOnSuccessfulAttackInStealth OnSuccessfulAttackInStealth;

	UPROPERTY(BlueprintAssignable)
	FOnStealthStateChanged OnStealthStateChanged;

	UPROPERTY(BlueprintAssignable)
	FOnIsStealthChanged OnIsStealthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnIsBeingSpotChanged OnIsBeingSpotChanged;

	UPROPERTY(BlueprintAssignable)
	FOnStealthCancelledByPlayer Local_OnStealthCancelledByPlayer;

private:
	UPROPERTY(ReplicatedUsing=OnRep_StealthState, Transient)
	EGhostStealthState _stealthState;

	UPROPERTY(Transient, Export)
	UTimerObject* _cooldownTimer;

	UPROPERTY()
	TMap<ACharacter*, TWeakObjectPtr<AScreenIndicatorWorldMarker>> _markers;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	FNonTunableStat _keepStealthOnAttackMiss;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _markerMinVisibleDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _markerLifetime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _stealthTerrorRadius;

	UPROPERTY(EditAnywhere)
	float _markerMaxAngleOffset;

	UPROPERTY(EditAnywhere)
	bool _useKillerInstinctWhenSpotted;

	UPROPERTY(Transient, Export)
	USightRevealableComponent* _sightRevealableComponent;

	UPROPERTY(Transient, Export)
	UStalkerComponent* _stalkerComponent;

private:
	UFUNCTION()
	void SetRedStainVisibility(const bool visible);

	UFUNCTION()
	void OnRep_StealthState(EGhostStealthState previousState);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPlayerSpottedKiller(ADBDPlayer* spotter);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnIsBeingSpottedChanged(ADBDPlayer* spotter, bool isBeingSpotted, bool onlyUpdateSurvivor);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_BroadcastOnSuccessfulAttackInStealth(ADBDPlayer* target);

public:
	UFUNCTION(BlueprintPure)
	bool IsStealthReadyToActivate() const;

	UFUNCTION(BlueprintPure)
	bool IsStealth() const;

	UFUNCTION(BlueprintPure)
	EGhostStealthState GetStealthState() const;

	UFUNCTION(BlueprintPure)
	float GetStealthChargePercent() const;

	UFUNCTION(Exec)
	void DBD_ResetGhostStealth();

private:
	UFUNCTION(Client, Reliable)
	void Client_SpawnMarkerOnCharacter(ACharacter* revealer);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TryActivateStealth();

	UFUNCTION(BlueprintCallable)
	void Authority_ResetGhostStealth();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGhostStealthComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGhostStealthComponent) { return 0; }
