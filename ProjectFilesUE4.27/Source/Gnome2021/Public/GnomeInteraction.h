#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GnomeInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGnomeInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UGnomeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGnomeInteraction) { return 0; }
