#pragma once

#include "CoreMinimal.h"
#include "BaseModifierContainer.h"
#include "StatusViewSource.h"
#include "ModifierTickableConditionReplicatedData.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EInventoryItemType.h"
#include "Templates/SubclassOf.h"
#include "GameplayModifierContainer.generated.h"

class AActor;
class UBaseModifierCondition;
class UTimerObject;
class ADBDPlayer;
class UGameplayModifierContainer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameplayModifierContainer : public UBaseModifierContainer
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing=OnRep_TickableConditionsData, Transient)
	FModifierTickableConditionReplicatedData _tickableConditionsData;

	UPROPERTY(Transient)
	TArray<FName> _tags;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool UseApplyFunction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool BroadcastStatusView;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName StatusViewID;

	UPROPERTY(EditDefaultsOnly)
	bool _autoInitializeOnBeginPlay;

	UPROPERTY(EditDefaultsOnly)
	bool _canOptimizeTickActivation;

private:
	UPROPERTY(ReplicatedUsing=OnRep_ActivationTimer, Transient, Export)
	UTimerObject* _activationTimer;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateIsApplicable();

protected:
	UFUNCTION(BlueprintCallable)
	void UnlistenToGameEvent(EDBDScoreTypes eventType);

	UFUNCTION(BlueprintCallable)
	void UnlistenToDispatcherGameEvent(FGameplayTag eventType);

	UFUNCTION(BlueprintCallable)
	void UnlistenToAllGameEvents();

	UFUNCTION(BlueprintCallable)
	void UnlistenToAllDispatcherGameEvents();

public:
	UFUNCTION(BlueprintCallable)
	void SetUseApplyFunction(bool use);

	UFUNCTION(BlueprintCallable)
	void SetModifierValue(FGameplayTag type, float GameplayModifierValue);

	UFUNCTION(BlueprintCallable)
	void SetFlag(FGameplayTag flag, bool flagValue);

	UFUNCTION(BlueprintCallable)
	void RemoveModifier(FGameplayTag type);

	UFUNCTION(BlueprintCallable)
	void RemoveAllModifiers();

	UFUNCTION(BlueprintCallable)
	void RemoveAllFlags();

protected:
	UFUNCTION()
	void OnRep_TickableConditionsData();

	UFUNCTION()
	void OnRep_ModifierData();

private:
	UFUNCTION()
	void OnRep_ActivationTimer();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnListenedGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);

	UFUNCTION(BlueprintNativeEvent)
	void OnLevelReadyToPlay();

public:
	UFUNCTION()
	void OnInitialized_Internal();

	UFUNCTION(BlueprintNativeEvent)
	void OnInitialized();

protected:
	UFUNCTION()
	void OnGameplayEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target);

	UFUNCTION(BlueprintNativeEvent)
	void OnGameEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnApplyEnd();

	UFUNCTION(BlueprintImplementableEvent)
	void OnApplyBegin();

protected:
	UFUNCTION(BlueprintCallable)
	void ListenToGameEvent(EDBDScoreTypes eventType);

	UFUNCTION(BlueprintCallable)
	void ListenToDispatcherGameEvent(FGameplayTag eventType);

	UFUNCTION(BlueprintNativeEvent)
	bool IsStatusViewActive() const;

public:
	UFUNCTION(BlueprintPure)
	bool IsActivationTimerDone() const;

	UFUNCTION(BlueprintPure)
	bool IsActivationTimerActive() const;

	UFUNCTION(BlueprintPure)
	bool HasModifierOfType(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	bool HasFlag(FGameplayTag flag) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetRemainingLifetime() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetPercentageFill() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOwningPlayer() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UGameplayModifierContainer* GetOriginatingEffect() const;

	UFUNCTION(BlueprintPure)
	float GetModifierValue(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	int32 GetLevelToDisplay() const;

	UFUNCTION(BlueprintPure)
	EInventoryItemType GetInventoryItemType() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	int32 GetIconFilePathIndex() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerRemainingTime() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerPercentRemaining() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerElapsedTimePercent() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerElapsedTime() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerDuration() const;

protected:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void FireActiveStatusViewEvent(FName statusViewIDNew, FName uniqueSourceID, const FStatusViewSource statusViewSource) const;

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TriggerActivationTimer(float activationTime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetActivationTimerPaused(const bool paused);

	UFUNCTION(BlueprintCallable)
	void Authority_InstantiateGameplayModifierConditions();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ClearActivationTimer();

	UFUNCTION(BlueprintImplementableEvent)
	void Apply(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	UBaseModifierCondition* AddCondition(TSubclassOf<UBaseModifierCondition> conditionType);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGameplayModifierContainer();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayModifierContainer) { return 0; }
