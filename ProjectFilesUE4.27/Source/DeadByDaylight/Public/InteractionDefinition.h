#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Activatable.h"
#include "EInteractionAnimation.h"
#include "MontagePlaybackDefinition.h"
#include "GameplayTagContainer.h"
#include "ESnapBackType.h"
#include "Interaction.h"
#include "Components/SceneComponent.h"
#include "EInputInteractionType.h"
#include "ESnapBackPositionType.h"
#include "EInteractionOwnership.h"
#include "SecondaryInteractionProperties.h"
#include "AnimationMontageDescriptor.h"
#include "ActivationDefinition.h"
#include "EInteractionComparisonPriority.h"
#include "InteractionDefinition.generated.h"

class UInteractionDefinition;
class UInterruptionDefinition;
class UObject;
class ADBDPlayer;
class UCurveFloat;
class UInteractor;
class UPrimitiveComponent;
class UPlayerInteractionHandler;
class AInteractable;
class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractionDefinition : public USceneComponent, public IActivatable, public IInteraction
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractionInterruptedDelegate);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractionFinishedDelegate);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionEnteredDelegate, ADBDPlayer*, player);

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString InteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnapTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ResetCameraDuringSnap;

	UPROPERTY(BlueprintReadWrite)
	bool IsInteractionCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowStartInteractionFromHeldInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnMontageComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnMontageBlendingOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnTimerExpire;

	UPROPERTY(EditAnywhere)
	bool StopInteractionOnHeightDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopEnterMontageOnExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopUpdateMontageOnExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreStrafeAnimFix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionAnimation InteractionAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CamperCanInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SlasherCanInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowInputPersistence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SnapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SnapRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnapStopDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TestClearPathDuringSnap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CheckInteractableIsInPlayerView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CheckInteractableInViewSphereSweepRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CheckInteractableInViewOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CheckInteractableInViewOffsetDistanceToHitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInterruptibleIfTestClearPathDuringSnapFails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TestPlayerOrientationOnSnap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleEnterAnimationToTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleMainAnimationToTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleExitAnimationToTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESnapBackType SnapBackType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESnapBackPositionType SnapBackPositionType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D SnapBackPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool SnapToInitialRotationDuringSnapBack;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseStartSnapTimeForSnapExitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileIncapacitated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileCloaked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileChainLinked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileShocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileUnhookingSelf;

	UPROPERTY(EditDefaultsOnly)
	bool CanInteractWhileCarrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowNavigationInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseCameraMontageMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OwnerBlocksAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHighPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowOverridingWhenNotForced;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreOverlapOnInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseAuthoritativeMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeAuthoritativePushedDuringEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeAuthoritativePushedDuringUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeAuthoritativePushedDuringExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanAuthoritativePush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CancelOnHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CancelOnAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoBindToParentInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoBindToParentZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CancelOnMoveInitialDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CancelOnMoveInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CancelOnMoveInputOnlyWhenRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ProgressBasedSkillChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanCrouch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AffectsStillness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ConsideredIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BlockSelfInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractionTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EInputInteractionType InteractionInputType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool StopInteractionOnInputRelease;

	UPROPERTY(EditDefaultsOnly)
	bool AllowHitMontageWhenInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowBasicInteractionIcon;

	UPROPERTY(Export)
	TArray<UInterruptionDefinition*> _interruptionDefinitions;

	UPROPERTY(BlueprintAssignable)
	FInteractionEnteredDelegate OnInteractionEnteredDelegate;

	UPROPERTY(BlueprintAssignable)
	FInteractionFinishedDelegate OnInteractionFinishedDelegate;

	UPROPERTY(BlueprintAssignable)
	FInteractionInterruptedDelegate OnInteractionInterruptedStartDelegate;

	UPROPERTY(BlueprintAssignable)
	FInteractionInterruptedDelegate OnInteractionInterruptedStartedDelegate;

	UPROPERTY(BlueprintAssignable)
	FInteractionInterruptedDelegate OnInteractionInterruptedEndDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DebugUnavailability;

	UPROPERTY(EditAnywhere)
	EInputInteractionType SecondaryActionInputType;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* NavigationSpeedCurveEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* NavigationSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* NavigationSpeedCurveExit;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldCheckInteractedUpon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionOwnership OwnershipUsability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExitInteractionTime;

	UPROPERTY(EditDefaultsOnly)
	bool ApplyModifiersToExitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText InteractionDescriptionText;

	UPROPERTY(EditDefaultsOnly)
	bool InteractionCanBeToggled;

	UPROPERTY(EditDefaultsOnly)
	bool IgnoreSprintToCancelSetting;

	UPROPERTY(EditDefaultsOnly)
	bool ForceWithSprintToCancelSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractionHeightDeltaMax;

	UPROPERTY(EditDefaultsOnly)
	float MaximumVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor EnterMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor UpdateMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor ExitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> EnterMontageVariantCycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> UpdateMontageVariantCycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ExitMontageVariantCycle;

	UPROPERTY(EditAnywhere)
	FName SnapSocketName;

	UPROPERTY(EditAnywhere)
	bool _canBeAttachedToAnyZone;

	UPROPERTY(EditDefaultsOnly)
	bool _isInterruptibleBySacrifice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreStun;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTagContainer _tags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag _objectStateTag;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, FSecondaryInteractionProperties> _secondaryInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _useHoldPrompt;

	UPROPERTY(EditDefaultsOnly)
	bool _allowInteractionInNarrowSpaces;

	UPROPERTY(EditDefaultsOnly)
	bool _allowIKSensorDuringInteraction;

private:
	UPROPERTY(EditDefaultsOnly)
	bool _startUpdateMontageDuringEnter;

	UPROPERTY(Export)
	UInteractor* _interactor;

	UPROPERTY(Transient, Export)
	TArray<UInteractionDefinition*> _mutuallyExclusiveInteractionsClient;

	UPROPERTY(EditAnywhere)
	FActivationDefinition _activationDefinition;

	UPROPERTY(Export)
	UPrimitiveComponent* _zone;

	UPROPERTY(EditAnywhere)
	EInputInteractionType _cancelInputType;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _preventingTags;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _disablingTags;

	UPROPERTY(Transient, Export)
	TArray<UPlayerInteractionHandler*> _evaluatingInteractionHandlers;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties DEPRECATED_SecondaryInteractionProperties;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldStartUpdateMontageDuringEnter(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable)
	void SetSecondaryActionInputType(EInputInteractionType inputType);

	UFUNCTION(BlueprintCallable)
	void RemoveDisablingTags(FGameplayTag tagToRemove);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUpdateMontageStart(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnInterruptorUpdateStart(UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptor, ADBDPlayer* interruptee);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionUpdateTick(ADBDPlayer* player, float deltaTime);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionUpdateStart(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionUpdateMontageReachedMiddle(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionUpdateEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionInterruptStarted(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionInterruptStart(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionInterruptEnd(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionInit(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionFinished(ADBDPlayer* player, bool hasInteractionStarted);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionExitTick(ADBDPlayer* player, float deltaTime);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionExitStart(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionExitEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionEnterTick(ADBDPlayer* player, float deltaTime);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionEnterStart(ADBDPlayer* player, float actualSnapTime);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionEnterEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionCancelled(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionAnimNotifyEvent(FName notifyID, ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	bool IsSupportedCharacterType(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintNativeEvent)
	bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInterruptionDefinition* interruption) const;

public:
	UFUNCTION(BlueprintNativeEvent)
	bool IsInteractionUsingOffering(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintNativeEvent)
	bool IsInteractionPossibleClient(const ADBDPlayer* player, EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintNativeEvent)
	bool IsInteractionPossibleBP(const ADBDPlayer* player, EInputInteractionType interactionType) const;

public:
	UFUNCTION(BlueprintPure)
	bool IsInteractionPossible(const ADBDPlayer* player, EInputInteractionType interactionType, bool performClientCheck, bool performHeightCheck) const;

	UFUNCTION(BlueprintNativeEvent)
	bool IsInteractionDone(const ADBDPlayer* player, EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	bool IsInteractableInPlayerView(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsInputPressed(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsCharacterFacingInteractorDirection(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintNativeEvent)
	bool IsCancelable(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FAnimationMontageDescriptor GetUpdateMontage(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetUpdateAnimationPlayRate(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FMontagePlaybackDefinition GetUpdateAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;

	UFUNCTION(BlueprintPure)
	float GetSnapTimeAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSnapTime(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintNativeEvent)
	FName GetSnapSocketName(const ADBDPlayer* player) const;

public:
	UFUNCTION(BlueprintPure)
	FVector GetSnapPointPositionAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetSnapPointPosition(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetSnapDistanceAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSnapDistance(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	EInputInteractionType GetSecondaryActionInputType(const UObject* worldContextObject) const;

	UFUNCTION(BlueprintPure)
	FRotator GetRotationToSnapPointAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FRotator GetRotationToSnapPoint(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintNativeEvent)
	ADBDPlayer* GetPlayerDependancy(const ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintPure)
	TArray<UInterruptionDefinition*> GetInterruptionDefinitions() const;

	UFUNCTION(BlueprintPure)
	UInteractor* GetInteractor() const;

	UFUNCTION(BlueprintNativeEvent)
	float GetInteractionTimeMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetInteractionTime(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintNativeEvent)
	FString GetInteractionText(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetInteractionExitTime(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	FText GetInteractionDescriptionText() const;

	UFUNCTION(BlueprintPure)
	AInteractable* GetInteractable() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetFocalPointPosition(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FAnimationMontageDescriptor GetExitMontage(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetExitAnimationPlayRate(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FMontagePlaybackDefinition GetExitAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FAnimationMontageDescriptor GetEnterMontage(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FMontagePlaybackDefinition GetEnterAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;

	UFUNCTION(BlueprintPure)
	float GetChargePercent() const;

	UFUNCTION(BlueprintNativeEvent)
	bool GetAllowNavigation(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FVector GetActualSnapPointPositionAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FVector GetActualSnapPointPosition(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintNativeEvent)
	TArray<AActor*> GetActorsToIgnoreOverlap() const;

	UFUNCTION(BlueprintPure)
	float GetActorHeightDelta(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetActionSpeedMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	bool DoesPlayerHaveClearPath(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void CompleteCharge(ADBDPlayer* character);

	UFUNCTION(BlueprintNativeEvent)
	EInteractionComparisonPriority ComparePriorityToInteraction(const UInteractionDefinition* interaction) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanOverrideInteraction(const UInteractionDefinition* interaction) const;

	UFUNCTION(BlueprintPure)
	float CalculateSnapTimeForConstantSpeed(const ADBDPlayer* player, const float speed) const;

	UFUNCTION(BlueprintPure)
	float CalculateSnapTimeForConstantMaxNormalMovementSpeed(const ADBDPlayer* player, float speedBoost) const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void Authority_OnInteractionAuthorized(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable)
	void AttachToZone(UPrimitiveComponent* zone);

	UFUNCTION(BlueprintCallable)
	void AttachToInteractor(UInteractor* interactor);

	UFUNCTION(BlueprintCallable)
	void AddMutuallyExclusiveInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void AddDisablingTags(FGameplayTag tagToAdd);

public:
	UInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionDefinition) { return 0; }
