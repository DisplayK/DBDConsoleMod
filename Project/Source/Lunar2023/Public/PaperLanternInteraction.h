#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "PaperLanternInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPaperLanternInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UPaperLanternInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UPaperLanternInteraction) { return 0; }
