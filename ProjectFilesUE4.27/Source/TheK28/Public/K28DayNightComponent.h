#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "EK28NightCycleState.h"
#include "K28DayNightComponent.generated.h"

class UAkComponent;
class UK28KillerComponent;
class UK28SurvivorComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28DayNightComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28KillerComponent> _killerK28ComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28SurvivorComponent> _survivorK28ComponentClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chargesRequiredForNightCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _transitionToNightDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _transitiionToDayDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chargesRequiredForNightDischarge;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _killerInjuresSurvivorChargeAmount;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _killerHookSurvivorChargeAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerTeleportsToRemnantChargeAmount;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _defaultNightChargeTime;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _injuredSurvivorsChargeTime;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _killerHidingInLockerChargeTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _defaultNightTimeDischargeRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _survivorInLockerDischargeRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _nighttimeNearingActivationThresholdPercent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _nightCycleNearingEndThresholdPercent;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentDayNightCycle)
	EK28NightCycleState _currentNightCycleState;

	UPROPERTY(Transient)
	int32 _authority_numberInjuredSurvivors;

	UPROPERTY(Replicated, Transient)
	float _maxChargeAmount;

	UPROPERTY(Replicated, Transient)
	float _currentChargeAmount;

	UPROPERTY(ReplicatedUsing=OnRep_NighttimeNearingActivation)
	bool _nighttimeNearingActivationThresholdReached;

	UPROPERTY(ReplicatedUsing=OnRep_HasReachedNightCycleNearEndThreshold)
	bool _hasReachedNightCycleNearEndThreshold;

private:
	UFUNCTION()
	void OnRep_NighttimeNearingActivation();

	UFUNCTION()
	void OnRep_HasReachedNightCycleNearEndThreshold();

	UFUNCTION()
	void OnRep_CurrentDayNightCycle();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNightCycleChanged(UAkComponent* akComponent, EK28NightCycleState newNightCycleState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsInLastTwentySecondsOfNightCycle(UAkComponent* akComponent);

private:
	UFUNCTION()
	void Authority_OnSurvivorDamageStateChanged(ECamperDamageState previousDamageState, ECamperDamageState newDamageState);

	UFUNCTION()
	void Authority_OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28DayNightComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28DayNightComponent) { return 0; }
