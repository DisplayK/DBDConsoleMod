#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GlyphInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGlyphInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UGlyphInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGlyphInteraction) { return 0; }
