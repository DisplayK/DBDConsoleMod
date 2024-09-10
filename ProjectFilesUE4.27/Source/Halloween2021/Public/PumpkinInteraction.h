#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "PumpkinInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPumpkinInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UPumpkinInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UPumpkinInteraction) { return 0; }
