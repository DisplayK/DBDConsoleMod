#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "SetGroundPortalInteraction.generated.h"

class UDemogorgonPortalPlacerStateComponent;
class UObjectPlacerComponent;
class ADemogorgonPortal;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetGroundPortalInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

	UPROPERTY(Transient, Export)
	UObjectPlacerComponent* _trapPlacerComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ADemogorgonPortal> _portalClassToSpawn;

public:
	USetGroundPortalInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USetGroundPortalInteraction) { return 0; }
