#pragma once

#include "CoreMinimal.h"
#include "BaseLockerItem.h"
#include "EK28LockbarState.h"
#include "TagStateBool.h"
#include "K28Lockbar.generated.h"

class USkeletalMeshComponent;
class ADBDPlayer;
class UStaticMesh;
class UAnimationMontageSlave;
class UStaticMeshComponent;
class UBoxComponent;
class UBaseActorAttackableComponent;
class UMontagePlayer;

UCLASS()
class AK28Lockbar : public ABaseLockerItem
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_State)
	EK28LockbarState _state;

private:
	UPROPERTY(EditDefaultsOnly)
	UStaticMesh* _lockbarStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _staticLockMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _boxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBaseActorAttackableComponent* _lockAttackableComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UMontagePlayer* _montagePlayer;

	UPROPERTY(VisibleAnywhere, Export)
	UAnimationMontageSlave* _animationMontageSlave;

	UPROPERTY(Replicated)
	FTagStateBool _isLocked;

private:
	UFUNCTION()
	void OnRep_State();

	UFUNCTION()
	void OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

	UFUNCTION()
	void OnLocallyObservedChanged();

protected:
	UFUNCTION(BlueprintPure)
	bool IsLocallyObservingSurvivor() const;

private:
	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerLockbarBreak();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetLockbarHighlightActivationState(bool isHightlightActive);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStateChanged(EK28LockbarState newState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28Lockbar();
};

FORCEINLINE uint32 GetTypeHash(const AK28Lockbar) { return 0; }
