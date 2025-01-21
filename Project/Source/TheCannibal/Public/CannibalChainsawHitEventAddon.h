#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "CannibalChainsawHitEventAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCannibalChainsawHitEventAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

public:
	UCannibalChainsawHitEventAddon();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawHitEventAddon) { return 0; }
