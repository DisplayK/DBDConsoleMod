#pragma once

#include "CoreMinimal.h"
#include "ChainsawRevInteraction.h"
#include "CannibalChainsawRevInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCannibalChainsawRevInteraction : public UChainsawRevInteraction
{
	GENERATED_BODY()

public:
	UCannibalChainsawRevInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawRevInteraction) { return 0; }
