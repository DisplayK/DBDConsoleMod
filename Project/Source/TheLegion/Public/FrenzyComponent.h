#pragma once

#include "CoreMinimal.h"
#include "FrenzyIncreasedTierDelegate.h"
#include "FrenzyStartDelegate.h"
#include "FrenzyData.h"
#include "FrenzyReadyToStartDelegate.h"
#include "TunableStat.h"
#include "Components/ActorComponent.h"
#include "FrenzyEndDelegate.h"
#include "FrenzyEndNoCooldownDelegate.h"
#include "StartInjuredBleedoutDuringFrenzyDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EFrenzyEndReason.h"
#include "FrenzyComponent.generated.h"

class UStatusEffect;
class ASlasherPlayer;
class UInteractionDefinition;
class UGameplayTagContainerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THELEGION_API UFrenzyComponent : public UActorComponent, public IFrenzyData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FFrenzyStartDelegate OnFrenzyStarted;

	UPROPERTY(BlueprintAssignable)
	FFrenzyEndDelegate OnFrenzyEnded;

	UPROPERTY(BlueprintAssignable)
	FFrenzyEndNoCooldownDelegate OnFrenzyEndedNoCooldown;

	UPROPERTY(BlueprintAssignable)
	FStartInjuredBleedoutDuringFrenzyDelegate OnInjuredBleedoutStartedDuringFrenzy;

	UPROPERTY(BlueprintAssignable)
	FFrenzyReadyToStartDelegate OnFrenzyReadyToStart;

	UPROPERTY(BlueprintAssignable)
	FFrenzyIncreasedTierDelegate OnFrenzyIncreasedTier;

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _allowManuallyEndFrenzy;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chargeToLoseOnRemoveBleedoutTimeAttack;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chargeToLoseOnNonFrenzyAttack;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chargeToLoseOnMissedFrenzyAttack;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _frenzyMaxDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _frenzyRechargeDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _usagePercentNeededToStartFrenzy;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _putCamperInBleedoutBonus;

	UPROPERTY(Transient)
	ASlasherPlayer* _slasher;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _cooldownInteraction;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _boltSlasherEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzySlasherEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzyTier0SlasherEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzyTier1SlasherEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzyTier2SlasherEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzyTier3SlasherEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzyTier4SlasherEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzyCooldownEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _boltCamperEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _frenzyCamperEffect;

public:
	UFUNCTION(BlueprintCallable)
	void StartFrenzy();

	UFUNCTION(BlueprintCallable)
	void SetStartingFrenzy(bool startingFrenzy);

	UFUNCTION(BlueprintCallable)
	void SetObjectState(UGameplayTagContainerComponent* objectState);

	UFUNCTION(BlueprintCallable)
	void ResumeFrenzyChargeDepletion();

	UFUNCTION(BlueprintCallable)
	void PauseFrenzyChargeDepletion();

private:
	UFUNCTION()
	void OnMoriStarted();

	UFUNCTION()
	void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintCallable)
	void OnFrenzyCooldownStarted();

	UFUNCTION(BlueprintPure)
	bool IsStartingFrenzy() const;

	UFUNCTION(BlueprintPure)
	bool IsInFrenzyCooldown() const;

	UFUNCTION(BlueprintPure)
	bool IsInFrenzy() const;

private:
	UFUNCTION()
	void InitializeFrenzy();

public:
	UFUNCTION(BlueprintPure)
	bool HasStartedInjuredBleedoutDuringThisFrenzy() const;

	UFUNCTION(BlueprintCallable)
	void EndFrenzy(EFrenzyEndReason reason);

	UFUNCTION(BlueprintPure)
	bool CanStartFrenzy() const;

	UFUNCTION(BlueprintPure)
	bool CanManuallyEndFrenzy() const;

public:
	UFrenzyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzyComponent) { return 0; }
