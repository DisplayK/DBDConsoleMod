#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "K29SurvivorStatus.h"
#include "K29PowerStatusHandlerComponent.generated.h"

class UChargeableInteractionDefinition;
class UK29SurvivorThrowableComponent;
class ASlasherPlayer;
class UCurveFloat;
class UStatusEffect;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK29_API UK29PowerStatusHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxInfectionLevel;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _infectionAddedPerTickWhileActive;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _stabilizingHealAmountByUsage;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _initialInfectionLevel;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _addedInfectionLevelsOnGrab;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _infectionHealingMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _infectionIncubationThreshold;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _useInfectionRemoverChargeTime;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hinderedStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _gateBlockerStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK29SurvivorThrowableComponent> _survivorThrowableClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UChargeableInteractionDefinition> _useInfectionRemoverInteractionSelfClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UChargeableInteractionDefinition> _useInfectionRemoverInteractionOtherClass;

	UPROPERTY(EditDefaultsOnly)
	int32 _maxInfectionLevelWhenHooked;

	UPROPERTY(EditDefaultsOnly)
	float _recentlyGrabbedThresholdSeconds;

private:
	UPROPERTY(ReplicatedUsing=OnRep_SurvivorStatusList)
	TArray<FK29SurvivorStatus> _survivorStatusList;

private:
	UFUNCTION(Server, Reliable)
	void Server_ReleaseSurvivor(ACamperPlayer* survivor, bool isForced);

	UFUNCTION(Server, Reliable)
	void Server_GrabSurvivor(ACamperPlayer* survivor, const bool isProcessingInitialInfection);

	UFUNCTION()
	void OnRep_SurvivorStatusList(TArray<FK29SurvivorStatus> oldSurvivorStatus);

	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UseStabilizingSpray(ACamperPlayer* targetSurvivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoveSurvivorFromCloset(ACamperPlayer* survivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ReleaseSurvivor(ACamperPlayer* survivor, bool isForced);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_GrabSurvivor(ACamperPlayer* survivor, const bool isProcessingInitialInfection);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DropSurvivor(ACamperPlayer* leftSurvivor);

public:
	UFUNCTION(BlueprintCallable)
	int32 GetMaxInfectionLevel();

	UFUNCTION(BlueprintCallable)
	int32 GetInfectionLevel(const ACamperPlayer* survivor);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGrabbingNonInfectedSurvivor();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGrabbingInfectedSurvivor();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_UseStabilizingSpray(ACamperPlayer* instigatingSurvivor, ACamperPlayer* targetSurvivor);

	UFUNCTION(Exec)
	void Authority_SetAllSurvivorsToMaxInfection();

	UFUNCTION(Exec)
	void Authority_SetAllSurvivorsToInitialInfection();

private:
	UFUNCTION()
	void Authority_OnSurvivorImmoblizedChanged();

	UFUNCTION()
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSlash(ACamperPlayer* targetSurvivor);

private:
	UFUNCTION()
	void Authority_OnIntroCompleted();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_HealInfectionLevels(const ACamperPlayer* survivor, const int32 infectionLevelsToHeal, const bool shouldSetInfectionActiveToFalse);

	UFUNCTION(Exec)
	void Authority_HealAllSurvivorsInfectionWithStabilizingSpray();

	UFUNCTION(BlueprintCallable)
	void Authority_AddInfectionLevels(const ACamperPlayer* survivor, const int32 infectionToAdd);

	UFUNCTION(BlueprintCallable)
	void AddToTimesCuredByHeal(const ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK29PowerStatusHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PowerStatusHandlerComponent) { return 0; }
