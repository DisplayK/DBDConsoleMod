#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "AttackDelegatePair.h"
#include "EAttackType.h"
#include "DBDAttackerComponent.generated.h"

class UDBDAttack;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAttackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackPhaseChangedDelegate, const EAttackType, attackType);

public:
	UPROPERTY(BlueprintAssignable, Transient)
	FOnAttackPhaseChangedDelegate OnAttackStartDelegate;

	UPROPERTY(BlueprintAssignable, Transient)
	FOnAttackPhaseChangedDelegate OnAttackFinishDelegate;

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _autonomousHitPredictionDelay;

	UPROPERTY(Transient, Export)
	TArray<UDBDAttack*> _attacks;

	UPROPERTY(Transient, Export)
	UDBDAttack* _requestedAttack;

	UPROPERTY(Transient, Export)
	UDBDAttack* _currentAttack;

	UPROPERTY(Transient)
	TArray<FAttackDelegatePair> _attackHitDelegates;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_StoreAttack(const EAttackType attackType);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StoreAttack(const EAttackType attackType);

public:
	UFUNCTION(BlueprintCallable)
	void Local_RequestAttack(const EAttackType attackType);

	UFUNCTION(BlueprintPure)
	bool IsAttackTransitionRequested(const EAttackType attackType) const;

	UFUNCTION(BlueprintPure)
	bool IsAttacking() const;

	UFUNCTION(BlueprintPure)
	bool IsAnyAttackTransitionRequested() const;

public:
	UDBDAttackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackerComponent) { return 0; }
