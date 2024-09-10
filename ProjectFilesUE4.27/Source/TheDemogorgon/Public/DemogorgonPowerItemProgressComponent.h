#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "DemogorgonPowerItemProgressComponent.generated.h"

class UDemogorgonPortalPlacerStateComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

public:
	UDemogorgonPowerItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPowerItemProgressComponent) { return 0; }
