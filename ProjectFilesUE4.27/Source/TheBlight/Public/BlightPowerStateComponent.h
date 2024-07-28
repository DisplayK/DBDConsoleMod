#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "BlightPowerCollisionDelegate.h"
#include "BlightPowerStateInterface.h"
#include "Templates/SubclassOf.h"
#include "EWallGrabState.h"
#include "BlightPowerStateComponent.generated.h"

class UTimerObject;
class UInteractionDefinition;
class UBlightPowerState;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UBlightPowerStateComponent : public UActorComponent, public IBlightPowerStateInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FBlightPowerCollisionDelegate OnPowerCollided;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UBlightPowerState>> _blightPowerStateClasses;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _canDashCheckCollisionRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _canDashCheckCollisionHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _canDashCheckCollisionRange;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _canWallGrabPlayerTags;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blightLethalDashDodgeRadius;

private:
	UPROPERTY(Transient, Export)
	UInteractionDefinition* _powerInteractionDefinition;

	UPROPERTY(ReplicatedUsing=OnRep_StateTimer, Transient, Export)
	UTimerObject* _stateTimer;

	UPROPERTY(Transient)
	TArray<UBlightPowerState*> _blightPowerStates;

	UPROPERTY(Transient)
	UBlightPowerState* _currentBlightPowerState;

	UPROPERTY(ReplicatedUsing=OnRep_DashTokens, Transient)
	uint8 _dashTokens;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maximumDashTokens;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tokenChargeRate;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetWallGrabState(const EWallGrabState newState);

public:
	UFUNCTION(BlueprintCallable)
	void ResetDashTokens();

private:
	UFUNCTION()
	void OnRep_StateTimer();

	UFUNCTION()
	void OnRep_DashTokens();

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_SetWallGrabState(const EWallGrabState newState);

public:
	UFUNCTION(BlueprintPure)
	float GetStateTimeRemaining() const;

	UFUNCTION(BlueprintPure)
	UTimerObject* GetStateTimer() const;

	UFUNCTION(BlueprintPure)
	float GetStateTimeElapsed() const;

	UFUNCTION(BlueprintPure)
	UBlightPowerState* GetPowerStateByEnum(const EWallGrabState stateEnum) const;

	UFUNCTION(BlueprintPure)
	EWallGrabState GetPowerState() const;

	UFUNCTION(BlueprintPure)
	float GetLookAngleDegrees() const;

	UFUNCTION(BlueprintPure)
	uint8 GetDashTokensRemaining() const;

	UFUNCTION(BlueprintPure)
	UBlightPowerState* GetCurrentPowerState() const;

	UFUNCTION(BlueprintPure)
	bool CanDash() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlightPowerStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateComponent) { return 0; }
