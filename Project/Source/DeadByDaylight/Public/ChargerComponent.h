#pragma once

#include "CoreMinimal.h"
#include "EEnergyTypeEnum.h"
#include "ChargeStateChangeDelegate.h"
#include "Components/ActorComponent.h"
#include "EnergyPoweredInterface.h"
#include "ChargePercentChangeDelegate.h"
#include "ChargerComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChargerComponent : public UActorComponent, public IEnergyPoweredInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChargerComponentID;

	UPROPERTY(BlueprintAssignable)
	FChargeStateChangeDelegate OnChargeStateChange;

	UPROPERTY(BlueprintAssignable)
	FChargePercentChangeDelegate OnChargePercentChange;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEnergyTypeEnum EnergyType;

private:
	UPROPERTY(ReplicatedUsing=OnRep_EnergyLevel)
	float _currentEnergyLevel;

	UPROPERTY(Replicated)
	float _maxEnergyLevel;

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void UseEnergy(float seconds, float energyUseModifier);

	UFUNCTION(BlueprintCallable)
	void SetNormalizedEnergyLevel(float energyLevel);

	UFUNCTION(BlueprintCallable)
	void SetMaxEnergyLevel(float energyLevel);

	UFUNCTION(BlueprintCallable)
	void SetEnergyLevel(float energyLevel);

	UFUNCTION(BlueprintCallable)
	void Reset();

private:
	UFUNCTION()
	void OnRep_EnergyLevel(float previousEnergyLevel);

public:
	UFUNCTION(BlueprintPure)
	bool HasCharge() const;

	UFUNCTION(BlueprintPure)
	float GetNormalizedEnergyLevel() const;

	UFUNCTION(BlueprintPure)
	float GetMaxEnergyLevel() const;

	UFUNCTION(BlueprintPure)
	float GetEnergyLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChargerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChargerComponent) { return 0; }
