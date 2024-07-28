#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "PowerChargeChangedDelegate.h"
#include "PowerChargeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerChargeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FPowerChargeChangedDelegate OnPowerChargeChanged;

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentCharge, Transient)
	FSpeedBasedNetSyncedValue _currentCharge;

	UPROPERTY(Replicated)
	bool _forceFullCharge;

private:
	UFUNCTION()
	void OnRep_CurrentCharge();

	UFUNCTION()
	void OnCurrentChargeChanged(float value);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPowerChargeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPowerChargeComponent) { return 0; }
