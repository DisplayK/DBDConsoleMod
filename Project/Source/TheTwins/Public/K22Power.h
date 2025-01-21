#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "K22Power.generated.h"

class UChargeableComponent;
class AConjoinedTwin;
class UPowerChargeComponent;
class UK22PowerChargePresentationItemProgressComponent;

UCLASS()
class AK22Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _releaseConjoinedTwinChargeable;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _possessConjoinedTwinChargeable;

private:
	UPROPERTY(ReplicatedUsing=OnRep_ConjoinedTwin, Transient)
	AConjoinedTwin* _conjoinedTwin;

	UPROPERTY()
	AConjoinedTwin* _conjoinedTwinParadise;

	UPROPERTY(Transient, Export)
	UPowerChargeComponent* _powerCharge;

	UPROPERTY(Transient, Export)
	UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AConjoinedTwin> _conjoinedTwinClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerRechargeRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeBeforeAutoDestroy;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeBeforeRecallAvailable;

private:
	UFUNCTION()
	void OnRep_ConjoinedTwin();

	UFUNCTION()
	void OnPowerChargeEmpty();

	UFUNCTION()
	void OnFirstAttachmentToSister();

public:
	UFUNCTION(BlueprintPure)
	AConjoinedTwin* GetConjoinedTwin() const;

private:
	UFUNCTION()
	void Authority_OnPossessTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

	UFUNCTION()
	void Authority_OnDestroyTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK22Power();
};

FORCEINLINE uint32 GetTypeHash(const AK22Power) { return 0; }
