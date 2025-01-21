#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "K25EscapeLamentConfigurationGrasp.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25EscapeLamentConfigurationGrasp : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UK25EscapeLamentConfigurationGrasp();
};

FORCEINLINE uint32 GetTypeHash(const UK25EscapeLamentConfigurationGrasp) { return 0; }
