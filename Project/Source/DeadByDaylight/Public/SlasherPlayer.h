#pragma once

#include "CoreMinimal.h"
#include "EStunType.h"
#include "DBDPlayer.h"
#include "KillerControls.h"
#include "EAttackType.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DBDTimer.h"
#include "OffensiveActionDelegate.h"
#include "EKillerMoodInfluence.h"
#include "EKillerAbilities.h"
#include "AnimationMontageDescriptor.h"
#include "TargetFocusTimer.h"
#include "TagStateBool.h"
#include "GameplayTagContainer.h"
#include "ESlasherGuidedAction.h"
#include "EAttackZoneSet.h"
#include "SlasherPlayer.generated.h"

class UDBDNavModifierComponent;
class UKillerBlindingFXComponent;
class UAkComponent;
class ACamperExposerInstance;
class AActor;
class UKillerSoundCuesComponent;
class UKillerBloodFXComponent;
class UStillnessTrackerComponent;
class UMoriComponent;
class UAimAssistComponent;
class USlasherTREmitterComponent;
class UHitValidatorConfigurator;
class ULoudNoiseHUDIndicator;
class USlasherHitsWhileCarryingTrackerComponent;
class UArmIKSensorComponent;
class ACamperPlayer;
class UKillerIntroComponent;
class UFinisherMoriTrackerComponent;
class UHitValidatorComponent;
class UDBDAttackerComponent;
class UFirstPersonViewComponent;
class UKillerRedStainUpdateStrategy;
class USceneComponent;
class USlasherStunnableComponent;
class USlasherMovementComponent;
class UChaserCharacterComponent;

UCLASS()
class DEADBYDAYLIGHT_API ASlasherPlayer : public ADBDPlayer, public IKillerControls
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStalkModeChangedEvent, bool, isInStalkMode);

public:
	UPROPERTY(BlueprintAssignable)
	FOffensiveActionDelegate OnOffensiveAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PutDownTraceLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName DefaultSlasherPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoudNoiseDisplayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetPriorityFactor;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool ShouldDisplayAttackZones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACamperExposerInstance> CamperExposer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerMoodInfluence KillerMoodInfluence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EKillerAbilities> KillerAbilities;

	UPROPERTY(BlueprintReadOnly, Transient, Export)
	UKillerSoundCuesComponent* KillerSoundCuesComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowKillerPowerDebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasDamagedGeneratorSinceHook;

	UPROPERTY(BlueprintAssignable)
	FOnStalkModeChangedEvent OnStalkModeChangedEvent;

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	TWeakObjectPtr<UAkComponent> _audioComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDNavModifierComponent* _terrorNavModifierComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UKillerBloodFXComponent* _bloodFXComponent;

	UPROPERTY(Transient)
	float _slasherLightIntensity;

	UPROPERTY(EditDefaultsOnly)
	float _defaultAmountToSquish;

	UPROPERTY(Transient)
	TMap<ADBDPlayer*, FTargetFocusTimer> _stalkTimers;

	UPROPERTY(Transient, meta=(BindWidgetOptional), BlueprintReadWrite, EditAnywhere)
	UStillnessTrackerComponent* _stillnessTracker;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UAimAssistComponent* _aimAssistComponent;

	UPROPERTY(Transient)
	FDBDTimer _recentlyCloakedTimer;

	UPROPERTY(Transient)
	FDBDTimer _flashlightBlindEvasionScoreTimer;

	UPROPERTY(Transient)
	FDBDTimer _flashlightBurnoutEvasionScoreTimer;

	UPROPERTY(Transient)
	TMap<ADBDPlayer*, FAnimationMontageDescriptor> _predictedCamperHitMontages;

public:
	UPROPERTY(Transient, Export)
	USlasherTREmitterComponent* _terrorRadiusEmitter;

	UPROPERTY(Transient, Export)
	ULoudNoiseHUDIndicator* _loudNoiseIndicator;

	UPROPERTY(Transient, Export)
	USlasherHitsWhileCarryingTrackerComponent* _hitsWhileCarryingTracker;

	UPROPERTY(Transient)
	float _stealthIncreaseRate;

	UPROPERTY(Transient)
	float _stealthDecreaseRate;

	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	FDateTime _stillnessStartTime;

	UPROPERTY(Replicated)
	FTagStateBool _isInStalkMode;

	UPROPERTY()
	bool _isKilling;

	UPROPERTY(Replicated, Transient)
	int8 _allowedKillCount;

	UPROPERTY(Replicated, Transient)
	int8 _allowedKillAfterStrugglePhase;

	UPROPERTY(Replicated, Transient)
	bool _allowedKillLastSurvivor;

	UPROPERTY(Replicated, Transient)
	int32 _cachedBloodlustTier;

	UPROPERTY(Replicated, Transient)
	uint32 _killerPowerDebugFlags;

	UPROPERTY(EditAnywhere)
	FGameplayTag _presenceTag;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _persistantStateTags;

	UPROPERTY(EditAnywhere)
	bool _enableKillerCrouchInput;

	UPROPERTY(EditAnywhere)
	bool _canStartAttackWhileCrouched;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowpublicAccess=true))
	ACamperPlayer* _carriedCamper;

	UPROPERTY(VisibleAnywhere, Export)
	UMoriComponent* _moriComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UFinisherMoriTrackerComponent* _finisherMoriTrackerComponent;

	UPROPERTY(EditAnywhere, Transient, Export)
	UHitValidatorComponent* _hitValidator;

	UPROPERTY(VisibleAnywhere, Export)
	UHitValidatorConfigurator* _hitValidationConfigurator;

	UPROPERTY(VisibleAnywhere, Export)
	UDBDAttackerComponent* _attackerComponent;

	UPROPERTY(EditDefaultsOnly)
	EAttackType _basicAttackType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowpublicAccess=true))
	UArmIKSensorComponent* _armIKSensorComponent;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowpublicAccess=true))
	ACamperPlayer* _survivorBeingKilled;

	UPROPERTY(EditAnywhere, Transient, Export)
	UFirstPersonViewComponent* _firstPersonViewComponent;

	UPROPERTY(EditAnywhere, Transient, Export)
	UKillerIntroComponent* _killerIntroComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowpublicAccess=true))
	UKillerBlindingFXComponent* _blindingFXComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UKillerRedStainUpdateStrategy* _redStainUpdateStrategy;

	UPROPERTY(EditAnywhere)
	FName _squishFactorParameter;

	UPROPERTY(Export)
	USceneComponent* _attackZonePivot;

	UPROPERTY(Transient, Export)
	USlasherStunnableComponent* _slasherStunnableComponent;

public:
	UFUNCTION(BlueprintPure)
	bool WasRecentlyCloaked() const;

	UFUNCTION(BlueprintNativeEvent)
	void UpdateRageTierEffect(int32 previousTier, int32 currentTier);

	UFUNCTION(BlueprintImplementableEvent)
	void TriggerPutDownAnimation();

	UFUNCTION(BlueprintImplementableEvent)
	void TriggerPickUpAnimation();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void SpawnSlasherPower();

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool ShouldApplyBloodlustSpeedModifier() const;

	UFUNCTION(BlueprintCallable)
	void SetSurvivorBeingKilled(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void SetStalkTierWalkSpeedMultiplier(float stalkTierWalkSpeedMultiplier);

	UFUNCTION(BlueprintCallable)
	void SetLightIntensity(float intensity);

	UFUNCTION(BlueprintCallable)
	void SetIsKilling(bool isKilling);

	UFUNCTION(BlueprintCallable)
	void SetIsHookingSurvivor(const bool value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void SetGuidedAction(ESlasherGuidedAction action);

	UFUNCTION(BlueprintCallable)
	void SetChainsawSprinting(bool chainsawSprinting);

	UFUNCTION(BlueprintCallable)
	void SetCarriedCamper(ACamperPlayer* camper);

	UFUNCTION(BlueprintCallable)
	void SetAttackZonePivot(USceneComponent* attackZonePivot);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);

	UFUNCTION(Server, Reliable)
	void Server_SendAttackInput(bool pressed);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void PlayBloodHitsEffects();

public:
	UFUNCTION()
	void OnSurvivorsLeftChanged(int32 survivorRemaining);

public:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorKilled(ACamperPlayer* playerToKill, bool consumeKill, bool delayedSurvivorDeath);

	UFUNCTION(BlueprintImplementableEvent)
	void OnSuccessfulInterruption(ACamperPlayer* interruptedSurvivor);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnStealthChanged(bool stealth);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnStalkModeChangedCosmetic(bool stalkMode);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnStalkModeChanged(bool stalkMode);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPerformingChargableInteraction(float Progress);

public:
	UFUNCTION()
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

	UFUNCTION()
	void OnLoudNoiseIndicatorDestroyed();

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityUpdateActivate(EKillerAbilities killerAbility, float percent);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityEndDeactivate(EKillerAbilities killerAbility, bool forced);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityEndActivate(EKillerAbilities killerAbility);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityBeginDeactivate(EKillerAbilities killerAbility, bool forced);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityBeginActivate(EKillerAbilities killerAbility);

	UFUNCTION(BlueprintCallable)
	void OnDropCamperEnd(ADBDPlayer* camper);

	UFUNCTION(BlueprintImplementableEvent)
	void OnCamperHit(ACamperPlayer* camper);

public:
	UFUNCTION()
	void OnAttackStart(const EAttackType attackType);

	UFUNCTION()
	void OnAttackFinish(const EAttackType attackType);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetGuidedAction(ESlasherGuidedAction action);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_MergeLockOnDamageZones(bool enable);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DisplayAttackZones(bool display);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Cheat_SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);

	UFUNCTION(BlueprintImplementableEvent)
	void MergeLockOnDamageZones(bool enable);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool Local_CancelAttack();

	UFUNCTION(BlueprintPure)
	bool IsWalkLocked();

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsUncloaking() const;

	UFUNCTION(BlueprintPure)
	bool IsOfferingAllowingKill(const ACamperPlayer* camper) const;

	UFUNCTION(BlueprintPure)
	bool IsKilling() const;

	UFUNCTION(BlueprintPure)
	bool IsInterruptBlocked() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsImmuneToObservingPlayerDetection(const ADBDPlayer* observingPlayer) const;

	UFUNCTION(BlueprintCallable)
	bool IsIdling();

	UFUNCTION(BlueprintPure)
	bool IsHooking() const;

	UFUNCTION(BlueprintNativeEvent)
	bool IsCrouchAvailable_BP();

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsCloaking() const;

	UFUNCTION(BlueprintPure)
	bool IsChainsawSprinting() const;

	UFUNCTION(BlueprintPure)
	bool IsCarrying() const;

	UFUNCTION(BlueprintPure)
	bool IsASurvivorInTerrorRadius() const;

	UFUNCTION(BlueprintPure)
	bool IsAllowedToKill(const ACamperPlayer* camper) const;

	UFUNCTION(BlueprintCallable)
	void IncrementInterruptBlock();

	UFUNCTION(BlueprintPure)
	bool HasPreLevelGenerationModifier(FName modifierID) const;

	UFUNCTION(BlueprintPure)
	bool HasKillerAbility(EKillerAbilities killerAbility) const;

	UFUNCTION(BlueprintPure)
	USlasherTREmitterComponent* GetTerrorRadiusEmitter() const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetSurvivorBeingKilled() const;

	UFUNCTION(BlueprintPure)
	FDateTime GetStillnessStartTime() const;

	UFUNCTION(BlueprintPure)
	float GetStealthRatio() const;

	UFUNCTION(BlueprintPure)
	float GetStalkTierWalkSpeedMultiplier() const;

	UFUNCTION(BlueprintPure)
	USlasherMovementComponent* GetSlasherMovement() const;

	UFUNCTION(BlueprintPure)
	int32 GetRageTier() const;

	UFUNCTION(BlueprintPure)
	FGameplayTag GetPresenceTag() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetPlayerDropOffPoint() const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetObsessionTarget() const;

	UFUNCTION(BlueprintPure)
	FRotator GetLookRotation() const;

	UFUNCTION(BlueprintPure)
	float GetLightIntensity() const;

	UFUNCTION(BlueprintPure)
	bool GetIsAttacking() const;

	UFUNCTION(BlueprintPure)
	ESlasherGuidedAction GetGuidedAction() const;

	UFUNCTION(BlueprintCallable)
	float GetCurrentRotationYaw();

	UFUNCTION(BlueprintPure)
	UChaserCharacterComponent* GetChaserCharacterComponent() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	TArray<FName> GetCharacterCustomAnimTags() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetCarriedCamper() const;

	UFUNCTION(BlueprintPure)
	float GetBlindedPercent() const;

	UFUNCTION(BlueprintPure)
	float GetAnimDirection() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayAttackZones(bool display);

	UFUNCTION(BlueprintCallable)
	void DecrementInterruptBlock();

	UFUNCTION(Exec)
	void DBD_SetAttackZones(EAttackZoneSet attackZoneSet);

	UFUNCTION(Exec)
	void DBD_MergeLockOnDamageZones(bool enable);

	UFUNCTION(Exec)
	void DBD_DisplayAttackZones(bool display);

	UFUNCTION(Exec)
	void DBD_AllowKilling();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPickUpEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDropCamperEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCancelCarry();

	UFUNCTION(Client, Reliable)
	void Client_RequestStun(EStunType stunType, ADBDPlayer* stunner);

	UFUNCTION(BlueprintNativeEvent)
	bool CanSlashAttack_BP() const;

	UFUNCTION(BlueprintPure)
	bool CanPickupSurvivor() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanPerformKillerAbility(EKillerAbilities killerAbility) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanGainRage() const;

	UFUNCTION(BlueprintPure)
	bool CanEscapeCarry(ACamperPlayer* player) const;

	UFUNCTION(BlueprintCallable)
	bool CancelAttackByInput();

	UFUNCTION(BlueprintNativeEvent)
	bool CanAttack_BP(const EAttackType attackType) const;

	UFUNCTION(BlueprintPure)
	bool CanAttack(const EAttackType attackType) const;

	UFUNCTION(BlueprintPure)
	bool CanAffectLocalPlayer() const;

	UFUNCTION(BlueprintCallable)
	void BroadcastOnInstantTeleport();

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void BroadcastOffensiveAction() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetInStalkMode(bool stalkMode, bool forced);

	UFUNCTION(BlueprintCallable)
	void Authority_HandleKillerInterruptingSurvivor(ADBDPlayer* target);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AttemptEscapeCarry(ACamperPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AllowKilling(int32 numKills);

	UFUNCTION(BlueprintCallable)
	void AttackInputReleased();

	UFUNCTION(BlueprintCallable)
	void AttackInputPressed();

	UFUNCTION(BlueprintCallable)
	void ActionKillerReleased();

	UFUNCTION(BlueprintCallable)
	void ActionKillerPressed();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASlasherPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ASlasherPlayer) { return 0; }
