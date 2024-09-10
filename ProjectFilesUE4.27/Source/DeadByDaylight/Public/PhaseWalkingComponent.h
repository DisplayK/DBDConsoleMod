#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "OnGameEndedVFX.h"
#include "TunableStat.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "TriggerSurvivorVisibilityVFX.h"
#include "DBDBidirectionalTimer.h"
#include "OnPhaseWalkInfoReceived.h"
#include "TriggerKillerVisibilityVFX.h"
#include "OnMaxActivePhaseWalkCharges.h"
#include "TagStateBool.h"
#include "GameplayTagContainer.h"
#include "PhaseWalkInfo.h"
#include "UObject/NoExportTypes.h"
#include "DBDTimer.h"
#include "PhaseWalkingComponent.generated.h"

class UDecoySlasherComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPhaseWalkingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnPhaseWalkInfoReceived OnPhaseWalkInfoReceived;

	UPROPERTY(BlueprintAssignable)
	FOnGameEndedVFX OnGameEndedVFX;

	UPROPERTY(BlueprintAssignable)
	FTriggerSurvivorVisibilityVFX TriggerSurvivorVisibilityVFX;

	UPROPERTY(BlueprintAssignable)
	FTriggerKillerVisibilityVFX TriggerKillerVisibilityVFX;

	UPROPERTY(BlueprintAssignable)
	FOnMaxActivePhaseWalkCharges OnMaxActivePhaseWalkCharges;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> _huskClass;

	UPROPERTY(Transient)
	FTagStateBool _isActivePhaseWalking;

	UPROPERTY(Transient)
	FTagStateBool _isPassivePhaseWalking;

	UPROPERTY(Replicated, Transient)
	FTagStateBool _isInPostActivePhaseWalk;

	UPROPERTY(Transient)
	bool _isInteractionPhaseWalking;

	UPROPERTY(Replicated)
	AActor* _husk;

	UPROPERTY(Transient)
	FDBDBidirectionalTimer _activePhaseWalkCharges;

	UPROPERTY(Transient)
	bool _survivorsAreVisible;

	UPROPERTY(EditDefaultsOnly)
	int32 _passivePhaseWalkHusksCount;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _isVisibleDuringPhaseWalkTags;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _activePhaseWalkChargeGainRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _passivePhaseWalkDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _passivePhaseWalkFirstCooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _passivePhaseWalkCooldownDurationMin;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _passivePhaseWalkCooldownDurationMax;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _activePhaseWalkMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _activePhaseWalkMaxAcceleration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _defaultMaxAcceleration;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSurvivorVisibility(bool visible);

	UFUNCTION(BlueprintCallable)
	void UpdateKillerVisibility();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SpawnPassivePhaseWalkHusks();

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Broadcast_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);

public:
	UFUNCTION(BlueprintCallable)
	void RefillActivePhaseWalkCharges();

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_Broadcast_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);

public:
	UFUNCTION(BlueprintCallable)
	void ModifyActivePhaseWalkCharges(float delta);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MakePassivePhaseWalkHusksVisible(const FTransform& huskTransform, float opacityValue, float speedValue);

public:
	UFUNCTION(BlueprintCallable)
	void Local_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);

	UFUNCTION(BlueprintCallable)
	void Local_EndPhaseWalks();

	UFUNCTION(BlueprintPure)
	bool IsPhaseWalking() const;

	UFUNCTION(BlueprintPure)
	bool IsPassivePhaseWalking() const;

	UFUNCTION(BlueprintPure)
	bool IsDecoyActive() const;

	UFUNCTION(BlueprintPure)
	bool IsActivePhaseWalking() const;

protected:
	UFUNCTION(BlueprintPure)
	int32 GetSpiritPassivePhaseWalkHusksCountToSpawn() const;

public:
	UFUNCTION(BlueprintPure)
	FDBDTimer GetPassivePhaseWalkTimer() const;

	UFUNCTION(BlueprintPure)
	AActor* GetHusk() const;

	UFUNCTION(BlueprintPure)
	UDecoySlasherComponent* GetDecoySlasherComponent() const;

	UFUNCTION(BlueprintPure)
	float GetActivePhaseWalkCharges() const;

	UFUNCTION(BlueprintPure)
	float GetActivePhaseWalkChargePercentage() const;

	UFUNCTION(BlueprintPure)
	bool CanStartActivePhaseWalk() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsInPostActivePhaseWalk(bool value);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPhaseWalkingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPhaseWalkingComponent) { return 0; }
