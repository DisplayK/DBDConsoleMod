#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "PushTwinOnLockerInteraction.generated.h"

class AConjoinedTwin;
class ADBDPlayer;
class UChargeableComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_PushTwinOnLockerChargeable, Transient, Export)
	UChargeableComponent* _pushTwinOnLockerChargeable;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pushTwinOnLockerMaxCharge;

private:
	UFUNCTION()
	void OnTwinSet(AConjoinedTwin* twin);

	UFUNCTION()
	void OnRep_PushTwinOnLockerChargeable();

	UFUNCTION()
	void Authority_OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPushTwinOnLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UPushTwinOnLockerInteraction) { return 0; }
