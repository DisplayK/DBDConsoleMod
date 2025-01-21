#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "DBDAttackTargetTracker.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "EDetectionZone.h"
#include "Templates/SubclassOf.h"
#include "EAttackSubstate.h"
#include "EHitValidatorConfigName.h"
#include "ActionPredictionKey.h"
#include "PostAttackData.h"
#include "AttackSubstateRequestResult.h"
#include "DBDAttack.generated.h"

class UDBDAttackSubstate;
class UAttackableComponent;
class ACharacter;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAttack : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	EAttackType _attackType;

	UPROPERTY(EditDefaultsOnly)
	bool _useMontage;

	UPROPERTY(EditDefaultsOnly)
	EDetectionZone _damageZone;

	UPROPERTY(EditDefaultsOnly)
	EDetectionZone _lockZone;

	UPROPERTY(EditDefaultsOnly)
	EDetectionZone _obstructionZone;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _maxAccelerationMultiplier;

	UPROPERTY(EditDefaultsOnly)
	bool _onlyApplyAccelerationMultiplierWhenWalking;

	UPROPERTY(EditDefaultsOnly)
	FDBDAttackTargetTracker _targetTracker;

	UPROPERTY(EditDefaultsOnly)
	TMap<EAttackSubstate, TSubclassOf<UDBDAttackSubstate>> _stateClasses;

	UPROPERTY(Transient)
	TArray<ACharacter*> _localAlreadyHitTargets;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _hitTargets;

	UPROPERTY(Transient)
	TSet<ADBDPlayer*> _targetsAwaitingServerValidation;

private:
	UPROPERTY(Transient)
	TMap<EAttackSubstate, UDBDAttackSubstate*> _states;

	UPROPERTY(EditAnywhere)
	EHitValidatorConfigName _hitValidationConfigName;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestStateChange(const EAttackSubstate state);

protected:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HitTarget(ADBDPlayer* target, const float targetLocationTimestamp, FActionPredictionKey predictionKey);

public:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HitAttackableComponent(UAttackableComponent* attackableComponent);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ClearTargets();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SendPostHitTargetData(ADBDPlayer* owningKiller, ADBDPlayer* target, const FPostAttackData& attackData);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RequestStateChange(const EAttackSubstate state);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_HitTarget(ADBDPlayer* target, bool hitCosmeticOnly);

public:
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_HitAttackableComponent(UAttackableComponent* attackableComponent);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ClearTargets();

protected:
	UFUNCTION()
	void Local_OnMovementChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

private:
	UFUNCTION(Client, Reliable)
	void Client_ReceiveHitResult(ADBDPlayer* target, bool isValid, FActionPredictionKey predictionKey);

	UFUNCTION(Client, Reliable)
	void Client_ReceiveAttackSubstateRequestResult(const FAttackSubstateRequestResult result);

public:
	UDBDAttack();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttack) { return 0; }
