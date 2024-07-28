#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "ReverseBearTrap.generated.h"

class USkeletalMeshComponent;
class UAnimationMontageSlave;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AReverseBearTrap : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _rbtMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UAnimationMontageSlave* _animMontageSlave;

private:
	UPROPERTY(Replicated)
	int32 _keyID;

	UPROPERTY(Replicated)
	int32 _attemptsNeededToDetach;

	UPROPERTY(Replicated)
	bool _exitGatesPoweredAfterAttachment;

	UPROPERTY(Replicated)
	bool _generatorFixedAfterAttachment;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void StopMontage();

	UFUNCTION(BlueprintCallable)
	void StopExecutionTimer();

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool ShouldUpdateExecutionTimer() const;

public:
	UFUNCTION(BlueprintCallable)
	void SetVisible(bool visible);

protected:
	UFUNCTION(BlueprintCallable)
	void SetGateClosedAtAttachment(bool closed);

public:
	UFUNCTION(BlueprintCallable)
	void ResetExecutionTimer(float time);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnWarningLevelChanged(int32 previousWarningLevel, int32 currentWarningLevel);

private:
	UFUNCTION()
	void OnGeneratorComplete(int32 remainingGeneratorCount);

public:
	UFUNCTION(BlueprintCallable)
	void OnExitWarningZone();

	UFUNCTION(BlueprintCallable)
	void OnEnterWarningZone();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnDetachSurvivor(ACamperPlayer* survivor);

	UFUNCTION(BlueprintImplementableEvent)
	void OnAttachSurvivorBegin(ACamperPlayer* survivor);

	UFUNCTION(BlueprintImplementableEvent)
	void OnAttachSurvivor(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintCallable)
	void NotifyOnAttachSurvivorBegin(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void NotifyDetachStarted(ACamperPlayer* survivor);

	UFUNCTION(BlueprintPure)
	bool IsRBTActivated() const;

	UFUNCTION(BlueprintPure)
	bool IsInWarningZone() const;

	UFUNCTION(BlueprintPure)
	bool IsExecutionTimerDone() const;

	UFUNCTION(BlueprintPure)
	bool IsExecutionTimerActive() const;

	UFUNCTION(BlueprintCallable)
	void IncrementAttemptsMade();

	UFUNCTION(BlueprintPure)
	bool HasDetachStarted() const;

protected:
	UFUNCTION(BlueprintPure)
	bool GetWasGateClosedAtAttachment() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	int32 GetWarningLevel() const;

	UFUNCTION(BlueprintPure)
	int32 GetKeyID() const;

	UFUNCTION(BlueprintPure)
	bool GetGeneratorFixedAfterAttachment() const;

	UFUNCTION(BlueprintPure)
	bool GetExitGatesPoweredAfterAttachment() const;

	UFUNCTION(BlueprintPure)
	float GetExecutionTimerTimeLeft() const;

	UFUNCTION(BlueprintPure)
	float GetExecutionTimerPercentTimeElapsed() const;

	UFUNCTION(BlueprintPure)
	int32 GetAttemptsNeeded() const;

	UFUNCTION(BlueprintPure)
	int32 GetAttemptsMade() const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetAttachedSurvivor() const;

	UFUNCTION(BlueprintCallable)
	void FastForwardExecutionTimer(float deltaTime);

	UFUNCTION(BlueprintCallable)
	void DetachSurvivor(ACamperPlayer* survivor);

	UFUNCTION(BlueprintPure)
	bool CanExecute() const;

	UFUNCTION(BlueprintCallable)
	void Authority_SetKeyID(int32 keyID);

	UFUNCTION(BlueprintCallable)
	void Authority_GenerateAttemptsNeeded(const int32 remainingAttemptsTotal, const int32 remainingRBTs, const int32 numRemovers);

	UFUNCTION(BlueprintCallable)
	void AttachSurvivor(ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AReverseBearTrap();
};

FORCEINLINE uint32 GetTypeHash(const AReverseBearTrap) { return 0; }
