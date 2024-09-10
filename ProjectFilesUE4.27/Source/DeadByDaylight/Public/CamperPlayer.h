#pragma once

#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "OnHookStateChanged.h"
#include "CharmAttachable.h"
#include "EHealthType.h"
#include "OnHookEscapeFailedCosmetic.h"
#include "OnImmobilizeStateChanged.h"
#include "NoiseIndicatorEmitterInterface.h"
#include "OnHPSlotChanged.h"
#include "DBDPlayer.h"
#include "OnPickedUpEvent.h"
#include "OnGuidedStateChanged.h"
#include "EGender.h"
#include "Engine/EngineTypes.h"
#include "ECamperGuidedAction.h"
#include "ECamperImmobilizeState.h"
#include "EAuthoritativeMovementFlag.h"
#include "UObject/NoExportTypes.h"
#include "CamperPlayer.generated.h"

class UHookableComponent;
class APlayerController;
class AActor;
class UStalkedComponent;
class UInteractionDefinition;
class UCameraAttachmentComponent;
class UScreamComponent;
class UCurveFloat;
class USurviveTimerScoreEventComponent;
class UCamperStillnessTrackerComponent;
class UHookAntiCampingComponent;
class UBloodTrailSettings;
class UCharacterPositionRecorderComponent;
class USpherePlayerOverlapComponent;
class USurvivorHitSprintEffect;
class UKillerInstinctComponent;
class UCapsuleComponent;
class UDBDCamperData;
class UCamperSlashableComponent;
class UTerrorRadiusReceiverComponent;
class UCharmSpawnerComponent;
class UDBDPawnSensingComponent;
class ACamperPlayer;
class UChargeableComponent;
class UCamperHealthComponent;
class UCamperBloodTrailComponent;
class UChaseeCharacterComponent;
class UProtectionHitComponent;
class UCamperEndGameComponent;
class UAkComponent;
class UPrimitiveComponent;
class UMoveComponentToComponent;
class UCarriedMovementComponent;
class APawn;
class UAnimationMontageSlave;
class AReverseBearTrap;
class UDBDClipRegionComponent;

UCLASS()
class DEADBYDAYLIGHT_API ACamperPlayer : public ADBDPlayer, public ICharmAttachable, public INoiseIndicatorEmitterInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnHookStateChanged OnHookedStateChanged;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnGuidedStateChanged OnGuidedStateChanged;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnPickedUpEvent OnPickedUpDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnPickedUpEvent OnPickedUpEndDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnHPSlotChanged OnHPSlotChanged;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnImmobilizeStateChanged OnImmobilizeStateChanged;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FOnHookEscapeFailedCosmetic OnHookEscapeFailedCosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ReverseBearTrapAttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isBeingDissolved;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FootprintAudibleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStalkedComponent* StalkedComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraResetToleranceYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraResetTolerancePitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraRecenterOffsetYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraRecenterOffsetPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGender Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* DropStaggerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* DropStaggerMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeforDeathWhileCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeforDeathWhileHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondsUntilFootprintTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TriggerAfflictionHUDIntro;

protected:
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	APlayerController* _storedPlayerController;

	UPROPERTY(Transient, meta=(BindWidgetOptional), BlueprintReadWrite, EditAnywhere)
	UCamperStillnessTrackerComponent* _stillnessTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PartiallyHiddenStillnessThreshold;

	UPROPERTY(Replicated, Transient, EditAnywhere, BlueprintReadWrite)
	AActor* _escape;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	AActor* _overlappingEscape;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USpherePlayerOverlapComponent* ProximityZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* SlashableZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* HookSlashableZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCamperSlashableComponent* _camperSlashable;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTerrorRadiusReceiverComponent* _terrorRadiusReceiverComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float IKOffsetRightFoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float IKOffsetLeftFoot;

public:
	UPROPERTY(Transient, Export, EditAnywhere, BlueprintReadWrite)
	UDBDPawnSensingComponent* _camperSensor;

	UPROPERTY(Transient, Export, EditAnywhere, BlueprintReadWrite)
	USurviveTimerScoreEventComponent* _surviveTimerScoreComponent;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	TArray<ADBDPlayer*> _foundCampers;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	TArray<ADBDPlayer*> _potentialSaviors;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCamperHealthComponent* _healthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _hpSlot01;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _hpSlot02;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _mendChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBloodTrailSettings* _bloodTrailSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCamperBloodTrailComponent* _bloodTrailComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UKillerInstinctComponent* _killerInstinctComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCameraAttachmentComponent* _cameraAttachment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharmSpawnerComponent* _charmSpawnerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UHookableComponent* _hookableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHookAntiCampingComponent* _hookAntiCampingComponent;

	UPROPERTY(Transient, Export, EditAnywhere, BlueprintReadWrite)
	UProtectionHitComponent* _protectionHitComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UScreamComponent* _screamComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharacterPositionRecorderComponent* _positionRecorder;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool _lastEscaped;

	UPROPERTY(ReplicatedUsing=OnRep_RunInputPressed, Transient, EditAnywhere, BlueprintReadWrite)
	bool _runInputPressed;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	bool _trapIndicatorActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCamperEndGameComponent* _camperEndGameComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _noOcclusionAkComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _attenuationAkComponent;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	bool _isHealingKOCamper;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	bool _isSkillCheckFailed;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	bool _isBeingSacrificed;

	UPROPERTY(Transient, EditAnywhere, BlueprintReadWrite)
	bool _isWiggleProgressionAllowed;

	UPROPERTY(Transient, Export)
	UMoveComponentToComponent* _meshMover;

	UPROPERTY(Transient, Export)
	UCarriedMovementComponent* _carriedMovementComponent;

	UPROPERTY(ReplicatedUsing=OnRep_SprintEffect, Transient, Export)
	USurvivorHitSprintEffect* _sprintEffect;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateHealingTimer(float deltaTime);

	UFUNCTION(BlueprintImplementableEvent)
	void TriggerPutDownAnimation();

	UFUNCTION(BlueprintImplementableEvent)
	void TriggerPickUpAnimation();

	UFUNCTION(BlueprintCallable)
	void TriggerAfflictionHUDFeedback();

	UFUNCTION(BlueprintCallable)
	void StopHealingTimer();

	UFUNCTION(BlueprintCallable)
	void StartHealingTimer(float time);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetVignetteVisible(bool visible);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void SetPlayerExposedVFX();

	UFUNCTION(BlueprintCallable)
	void SetIsSkillCheckFailed(bool isSkillCheckFailed);

	UFUNCTION(BlueprintCallable)
	void SetIsHealingKOCamper(bool isHealingKOCamper);

	UFUNCTION(BlueprintCallable)
	void SetGuidedActionLocal(ECamperGuidedAction action);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void SetGuidedAction(ECamperGuidedAction action);

	UFUNCTION(BlueprintCallable)
	void SetBeingCarried(bool isBeingCarried, ADBDPlayer* carrier);

protected:
	UFUNCTION(Server, Reliable)
	void Server_SetRunInput(bool pressed);

public:
	UFUNCTION(Server, Reliable)
	void Server_SetOverlappingEscape(AActor* escape);

	UFUNCTION(BlueprintCallable)
	void RunLocked(bool lock);

	UFUNCTION(BlueprintCallable)
	void ResetPotentialSaviors();

	UFUNCTION(BlueprintCallable)
	void ResetCameraAttach();

	UFUNCTION(BlueprintImplementableEvent)
	void RemoveReverseBearTrap();

	UFUNCTION(BlueprintCallable)
	void OnUnhooked();

public:
	UFUNCTION(BlueprintCallable)
	void OnRep_SprintEffect();

	UFUNCTION(BlueprintCallable)
	void OnRep_RunInputPressed();

	UFUNCTION(BlueprintCallable)
	void OnProximityEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable)
	void OnPickUpEnter(ADBDPlayer* picker, float transitionTime);

protected:
	UFUNCTION(BlueprintCallable)
	void OnPickUpDenied();

public:
	UFUNCTION(BlueprintCallable)
	void OnPawnSensed(APawn* pawn);

public:
	UFUNCTION(BlueprintCallable)
	void OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession);

	UFUNCTION(BlueprintCallable)
	void OnHpSlotSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnHookedStateChangedCosmetic(bool hooked);

public:
	UFUNCTION(BlueprintCallable)
	void OnHooked();

	UFUNCTION(BlueprintCallable)
	void OnFinishedPlaying();

	UFUNCTION(BlueprintCallable)
	void OnDroppedStart();

	UFUNCTION(BlueprintCallable)
	void OnDroppedEnd(bool clearLeader);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnDroppedByBearTrap();

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetOverlappingEscape(AActor* escape);

protected:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetImmobilized(ECamperImmobilizeState state);

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetHookEscapeAutoFail(bool enabled);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetGuidedAction(ECamperGuidedAction action);

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetAuthoritativeMovementFlag(EAuthoritativeMovementFlag flag, bool value);

public:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_RemoveReverseBearTrap();

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_EscapeItemEvents(bool isItemFromSpawn);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MakeCamperDisappearBleedOut();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MakeCamperDisappear();

	UFUNCTION(BlueprintCallable)
	void Local_SetImmobilized(ECamperImmobilizeState state);

	UFUNCTION(BlueprintCallable)
	void Kill(EHealthType healthType);

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	bool IsVaulting() const;

	UFUNCTION(BlueprintPure)
	bool IsUnintentionallyImmobilized() const;

	UFUNCTION(BlueprintPure)
	bool IsUnhookingSelf() const;

	UFUNCTION(BlueprintPure)
	bool IsTrapped() const;

	UFUNCTION(BlueprintPure)
	bool IsSacrificed() const;

	UFUNCTION(BlueprintCallable)
	bool IsRunLocked();

	UFUNCTION(BlueprintPure)
	bool IsObsessionTarget() const;

	UFUNCTION(BlueprintPure)
	bool IsMovementGuided() const;

	UFUNCTION(BlueprintPure)
	bool IsInNeed() const;

	UFUNCTION(BlueprintPure)
	bool IsInDeathBed() const;

	UFUNCTION(BlueprintPure)
	bool IsImmobilized() const;

	UFUNCTION(BlueprintPure)
	bool IsHooked() const;

	UFUNCTION(BlueprintPure)
	bool IsHealingTimerExpired() const;

	UFUNCTION(BlueprintPure)
	bool IsGuidedBySlasher() const;

	UFUNCTION(BlueprintPure)
	bool IsEscaped() const;

	UFUNCTION(BlueprintPure)
	bool IsDeadOrInParadise() const;

	UFUNCTION(BlueprintPure)
	bool IsCrawling() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingUnhooked() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPutOnHook() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPutDown() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPulledFromCloset() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPickedUp() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingMended() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingKilled() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingInteractedWith() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingHealed() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingEndGameSacrificed() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingCarried() const;

	UFUNCTION(BlueprintCallable)
	void Input_ToggleRun();

	UFUNCTION(BlueprintCallable)
	void HatchEscapeZoneEntered(AActor* escape);

	UFUNCTION(BlueprintPure)
	bool HasReverseBearTrap() const;

	UFUNCTION(BlueprintPure)
	bool HasHitEvents() const;

	UFUNCTION(BlueprintPure)
	bool HasGuidedAction() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UChargeableComponent* GetWiggleChargeable() const;

	UFUNCTION(BlueprintPure)
	FRotator GetToAimPointRotation() const;

	UFUNCTION(BlueprintPure)
	UTerrorRadiusReceiverComponent* GetTerrorRadiusReceiverComponent() const;

	UFUNCTION(BlueprintPure)
	float GetStillness() const;

	UFUNCTION(BlueprintPure)
	AReverseBearTrap* GetReverseBearTrap() const;

	UFUNCTION(BlueprintPure)
	float GetPercentHealingTimer() const;

	UFUNCTION(BlueprintPure)
	AActor* GetOverlappingEscape() const;

	UFUNCTION(BlueprintPure)
	float GetObsessionTargetWeight() const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfEntityRenderRegions() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetNoOcclusionAudioComponent() const;

	UFUNCTION(BlueprintPure)
	UAnimationMontageSlave* GetMontageFollower();

	UFUNCTION(BlueprintPure)
	UMoveComponentToComponent* GetMeshMover() const;

	UFUNCTION(BlueprintPure)
	float GetMaxGruntDistance(bool isLocalPlayerKiller) const;

	UFUNCTION(BlueprintPure)
	bool GetIsWiggleProgressionAllowed() const;

	UFUNCTION(BlueprintCallable)
	bool GetIsSkillCheckFailed();

	UFUNCTION(BlueprintCallable)
	bool GetIsHealingKOCamper();

	UFUNCTION(BlueprintPure)
	bool GetIsBeingDissolved() const;

	UFUNCTION(BlueprintPure)
	ECamperImmobilizeState GetImmobilizedState() const;

	UFUNCTION(BlueprintPure)
	UHookableComponent* GetHookableComponent() const;

	UFUNCTION(BlueprintPure)
	UCamperHealthComponent* GetHealthComponent() const;

	UFUNCTION(BlueprintPure)
	ECamperGuidedAction GetGuidedAction() const;

	UFUNCTION(BlueprintPure)
	UDBDClipRegionComponent* GetEntityRenderRegionAtIndex(int32 InIndex) const;

	UFUNCTION(BlueprintPure)
	UChaseeCharacterComponent* GetChaseeCharacterComponent() const;

	UFUNCTION(BlueprintCallable)
	UCamperStillnessTrackerComponent* GetCamperStillnessComponent();

	UFUNCTION(BlueprintPure)
	UDBDCamperData* GetCamperData() const;

	UFUNCTION(BlueprintPure)
	UCameraAttachmentComponent* GetCameraAttachmentComponent() const;

	UFUNCTION(BlueprintPure)
	UCamperBloodTrailComponent* GetBloodTrailComponent() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetAttenuationAudioComponent() const;

	UFUNCTION(BlueprintPure)
	TArray<UDBDClipRegionComponent*> GetAllEntityRenderRegions() const;

	UFUNCTION(BlueprintPure)
	FVector GetAimPoint() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EventOnDeath();

	UFUNCTION(BlueprintCallable)
	void EscapeTutorial();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DoSacrificialDissolve();

	UFUNCTION(BlueprintCallable)
	void DetachFromGuidingPlayer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DecalBlood_Puddles();

	UFUNCTION(Exec)
	void DBD_SetSurvivorCameraArmLengthCommand(float cameraArmLength);

	UFUNCTION(BlueprintImplementableEvent)
	void DBD_SetSurvivorCameraArmLength(float cameraArmLength);

	UFUNCTION(Exec)
	void DBD_SetImmobilized(ECamperImmobilizeState state);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_LeaveParadise();

	UFUNCTION(Exec)
	void DBD_ForceRun(bool forced);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_CheatEscaped();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	float ComputeInteractionSuccessPercentage(const UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool ComputeHookEscapeResult();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool ComputeBeartrapEscapeResult();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_OnSlashedOutOfTrap(ADBDPlayer* requester);

	UFUNCTION(BlueprintPure)
	bool CanRushQuietly() const;

	UFUNCTION(BlueprintPure)
	bool CanBeShocked() const;

	UFUNCTION(BlueprintPure)
	bool CanBePickedUp() const;

	UFUNCTION(BlueprintPure)
	bool CanBeKilled() const;

	UFUNCTION(BlueprintCallable)
	void CallOnDroppedByBearTrap();

	UFUNCTION(BlueprintCallable)
	void Authority_SetImmobilized(ECamperImmobilizeState state);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnSlashed(ADBDPlayer* attacker);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DropItemAtLastSafePosition();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ApplySprintEffect();

	UFUNCTION(BlueprintCallable)
	void AttachToGuidingPlayer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDropsToRightHand();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDropsToLeftHand();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDrippingToGK_Mori();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDecalToGK_Mori();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ActivatePlayerExposedVFX();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ActivateLocalPlayerExposedVFX();

	UFUNCTION(BlueprintCallable)
	void ActionInputReleased();

	UFUNCTION(BlueprintCallable)
	void ActionInputPressed();

	UFUNCTION(BlueprintPure)
	bool AcceptsHealing() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACamperPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ACamperPlayer) { return 0; }
