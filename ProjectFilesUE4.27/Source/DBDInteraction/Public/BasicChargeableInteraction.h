#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "BasicChargeableInteraction.generated.h"

class UChargeableComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UBasicChargeableInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool AutoSpawnChargeableComponent;

	UPROPERTY(EditDefaultsOnly)
	bool ResetProgressWhenStoppingInteraction;

	UPROPERTY(EditDefaultsOnly)
	bool AutoAddCharge;

private:
	UPROPERTY(ReplicatedUsing=OnRep_SpawnedChargeable, Export)
	UChargeableComponent* _spawnedChargeable;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chargeTime;

private:
	UFUNCTION()
	void OnRep_SpawnedChargeable();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBasicChargeableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBasicChargeableInteraction) { return 0; }
