#pragma once

#include "CoreMinimal.h"
#include "OnSecondaryActionDone.h"
#include "AvailableInteractionCalculator.h"
#include "OnDeactivateSkillCheck.h"
#include "EInteractionLayer.h"
#include "InteractionPerformer.h"
#include "OnCurrentInteractionChangedBP.h"
#include "StoredInteraction.h"
#include "Components/ActorComponent.h"
#include "EInputInteractionType.h"
#include "ESkillCheckCustomType.h"
#include "GameplayTagContainer.h"
#include "ERequestState.h"
#include "Engine/EngineTypes.h"
#include "EInteractionValidationState.h"
#include "PlayerInteractionHandler.generated.h"

class UInteractionDefinition;
class UObject;
class USkillCheck;
class ADBDPlayer;
class UInterruptionDefinition;
class AActor;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerInteractionHandler : public UActorComponent, public IInteractionPerformer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PriorityConeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BotPriorityConeAngle;

	UPROPERTY(BlueprintAssignable)
	FOnSecondaryActionDone Authority_SecondaryActionDoneDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnCurrentInteractionChangedBP NewInteractionRequestedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnCurrentInteractionChangedBP ServerValidatedInteractionStartedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnCurrentInteractionChangedBP ServerValidatedInteractionEndedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionLayer InteractionLayer;

	UPROPERTY(BlueprintAssignable)
	FOnDeactivateSkillCheck OnDeactivateSkillCheckDelegate;

private:
	UPROPERTY(Transient)
	bool _hasInteractionRequest;

	UPROPERTY(Transient)
	bool _hasInteractionRequestInBuffer;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _interactionToSwapTo;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _currentInteraction;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _currentPlayerDependencies;

	UPROPERTY(Transient)
	EInputInteractionType _currentInteractionType;

	UPROPERTY(Transient, Export)
	USkillCheck* _skillCheck;

	UPROPERTY(Transient)
	TArray<float> _progressBasedSkillChecks;

	UPROPERTY(Transient)
	ADBDPlayer* _requestedInterruptionOtherParty;

	UPROPERTY(Transient, Export)
	UInterruptionDefinition* _requestedInterruptionDefinition;

	UPROPERTY(Transient)
	bool _requestedInterruptionIsInterruptor;

	UPROPERTY(Transient)
	ADBDPlayer* _currentInterruptionOtherParty;

	UPROPERTY(Transient, Export)
	UInterruptionDefinition* _currentInterruptionDefinition;

	UPROPERTY(Transient)
	bool _currentInterruptionIsInterruptor;

	UPROPERTY(Transient)
	bool _interactionInProgress;

	UPROPERTY(Transient, Export)
	TArray<UInteractionDefinition*> _interactionsInZone;

	UPROPERTY(EditDefaultsOnly)
	FAvailableInteractionCalculator _availableInteractionCalculator;

	UPROPERTY(Transient)
	TMap<UObject*, FGameplayTagContainer> _disableInteractionSourcesToExceptions;

public:
	UFUNCTION(BlueprintCallable)
	void UnPauseSkillCheckTimer();

	UFUNCTION(BlueprintCallable)
	void SetScanForInteractionsEnabled(bool enabled);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StoreInterruption_Interruptor(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetInteractionToSwapTo(UInteractionDefinition* interaction);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestInterruption_Interruptor();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_DebugRequestInteraction(const FString& interactionName, const FString& interactorName, const FString& interactableName);

public:
	UFUNCTION(Server, Reliable)
	void Server_Cheat_SetInteractionScanInterval(float interval);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_CancelCurrentInteractionByInput();

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Broadcast_StoreInteraction(FStoredInteraction interactionToStore);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Broadcast_ConfirmChargedCompleted(bool chargeComplete);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AnswerInterruption_Interruptee(ERequestState state);

public:
	UFUNCTION(BlueprintCallable)
	void ResetSuccessiveSkillCheckCount();

	UFUNCTION(BlueprintCallable)
	void RemoveInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void PauseSkillCheckTimer();

private:
	UFUNCTION()
	void OnAttachedInteractorOwnerEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UFUNCTION(BlueprintPure)
	int32 NumInteractionsInZone() const;

private:
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_StoreInterruption_Interruptor(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StoreInteraction(FStoredInteraction interactionToStore);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetInteractionToSwapTo(UInteractionDefinition* interaction);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_RequestInterruption_Interruptee(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_InterruptionRequestResult_Interruptor(ERequestState state, bool grantInterruptScore);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_InteractionPredictionValidationResult(UInteractionDefinition* interaction, EInteractionValidationState state);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_CancelCurrentInteractionByInput();

	UFUNCTION(BlueprintCallable)
	void IncrementSuccessiveSkillCheckCount();

	UFUNCTION(BlueprintCallable)
	bool HasAvailableInteraction(EInputInteractionType interactionType);

	UFUNCTION(BlueprintPure)
	bool HasActiveSkillCheck() const;

	UFUNCTION(BlueprintPure)
	USkillCheck* GetSkillCheck() const;

	UFUNCTION(BlueprintPure)
	float GetMultiplicativeSkillCheckProbabilityModifier() const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentInteractionOfType(EInputInteractionType interactionInputType) const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentInteraction() const;

	UFUNCTION(BlueprintPure)
	void GetAvailableInteractions(TArray<UInteractionDefinition*>& result) const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetAvailableInteractionByID(const FString& interactionID) const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetAvailableInteraction(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	float GetAdditiveSkillCheckProbabilityModifier() const;

	UFUNCTION(Client, Reliable)
	void Client_StopSkillCheck();

	UFUNCTION(Client, Reliable, WithValidation)
	void Client_NotifyChargeCompleted(const UInteractionDefinition* interaction);

	UFUNCTION(Client, Reliable)
	void Client_Cheat_SetInteractionScanInterval(float interval);

	UFUNCTION()
	void CleanInteractionArray(AActor* DestroyedActor);

	UFUNCTION(BlueprintPure)
	bool CanPerformInteraction(const FString& interactionName) const;

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Broadcast_Multicast_ConfirmChargedCompleted(bool chargeComplete);

	UFUNCTION(BlueprintCallable)
	void Authority_TriggerCustomSkillCheck(const ESkillCheckCustomType type, float warningSoundDelay);

	UFUNCTION(BlueprintCallable)
	void Authority_ClearPlayerDependency(ADBDPlayer* playerDependency);

	UFUNCTION(BlueprintCallable)
	void Authority_ClearPlayerDependencies();

	UFUNCTION(BlueprintCallable)
	void AddSelfInteractions(const AActor* interactionRoot);

	UFUNCTION(BlueprintCallable)
	void AddInteraction(UInteractionDefinition* interaction);

public:
	UPlayerInteractionHandler();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerInteractionHandler) { return 0; }
