#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "CannibalChainsawPower.h"
#include "TagStateBool.h"
#include "CannibalChainsawPowerComponent.generated.h"

class UPowerChargeComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCannibalChainsawPowerComponent : public UActorComponent, public ICannibalChainsawPower
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UPowerChargeComponent* _chainsawPowerCharge;

	UPROPERTY(Transient, Export)
	UPowerChargeComponent* _chainsawPowerDischarge;

	UPROPERTY(Transient, Export)
	UPowerChargeComponent* _tantrumPowerCharge;

	UPROPERTY(Replicated, Transient)
	FTagStateBool _isInTantrum;

	UPROPERTY(ReplicatedUsing=OnRep_NumPowerCharges, Transient)
	int32 _numPowerCharges;

	UPROPERTY(Replicated, Transient)
	int32 _numPowerChargesConsumed;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chainsawDashDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chainsawPowerMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chainsawChargeRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chainsawMaxNumberOfCharges;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chainsawCooldownIncreaseRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chainsawCooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chainsawMaxCooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tantrumChargeRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tantrumDischargeRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tantrumMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tantrumDurationIncreaseRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tantrumDuration;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tantrumMaxDuration;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_OnTantrumPowerChargeFull();

	UFUNCTION()
	void OnRep_NumPowerCharges(int32 previousNumPowerCharges);

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnTantrumPowerChargeFull();

	UFUNCTION()
	void Local_OnTantrumPowerChargeFull();

public:
	UFUNCTION(BlueprintPure)
	int32 GetNumberOfChainsawPowerCharges() const;

private:
	UFUNCTION()
	void Authority_OnChainsawPowerChargeFull();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCannibalChainsawPowerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawPowerComponent) { return 0; }
