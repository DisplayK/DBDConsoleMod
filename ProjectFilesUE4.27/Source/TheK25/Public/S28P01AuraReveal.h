#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "S28P01AuraReveal.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class US28P01AuraReveal : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	US28P01AuraReveal();
};

FORCEINLINE uint32 GetTypeHash(const US28P01AuraReveal) { return 0; }
