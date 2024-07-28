#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K29PowerChargePresentationItemProgressComponent.generated.h"

class UK29PowerStatusHandlerComponent;
class UK29RushChargesHandlerComponent;
class UK29RushChargeableInteraction;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK29PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UK29PowerStatusHandlerComponent* _statusHandlerComponent;

	UPROPERTY(Transient, Export)
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

	UPROPERTY(Transient, Export)
	UK29RushChargeableInteraction* _rushInteraction;

public:
	UK29PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PowerChargePresentationItemProgressComponent) { return 0; }
