#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "BlindingEffectorInterface.h"
#include "FlashlightComponent.generated.h"

class UFlashlightableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightComponent : public UActorComponent, public IBlindingEffectorInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFlashlightEvent);

public:
	UPROPERTY(BlueprintAssignable)
	FOnFlashlightEvent OnFlashlightTurnedOn;

	UPROPERTY(BlueprintAssignable)
	FOnFlashlightEvent OnFlashlightTurnedOff;

	UPROPERTY(BlueprintAssignable)
	FOnFlashlightEvent OnFlashlightablesUpdated;

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _baseBlindnessDuration;

	UPROPERTY(EditAnywhere)
	float _baseAccuracy;

	UPROPERTY(EditAnywhere)
	float _lagDuration;

	UPROPERTY(Transient, Export)
	TSet<UFlashlightableComponent*> _flashlightables;

	UPROPERTY(Transient, Export)
	TSet<UFlashlightableComponent*> _autonomousLitFlashlightables;

	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedLitFlashlightables, Transient, Export)
	TArray<UFlashlightableComponent*> _replicatedLitFlashlightables;

	UPROPERTY(ReplicatedUsing=OnRep_IsOwnerLagging, Transient)
	bool _isOwnerLagging;

public:
	UFUNCTION(BlueprintCallable)
	void TurnOn();

	UFUNCTION(BlueprintCallable)
	void TurnOff();

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetAndUpdateAutonomousLitFlashlightables(const TArray<UFlashlightableComponent*>& newLitFlashlightables);

	UFUNCTION()
	void OnRep_ReplicatedLitFlashlightables();

	UFUNCTION()
	void OnRep_IsOwnerLagging();

public:
	UFUNCTION(BlueprintPure)
	bool IsOn() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveTimeToBlindModifier() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveBlindnessDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlashlightComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightComponent) { return 0; }
