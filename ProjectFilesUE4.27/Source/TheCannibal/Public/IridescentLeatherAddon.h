#pragma once

#include "CoreMinimal.h"
#include "CannibalChainsawHitEventAddon.h"
#include "IridescentLeatherAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIridescentLeatherAddon : public UCannibalChainsawHitEventAddon
{
	GENERATED_BODY()

public:
	UIridescentLeatherAddon();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentLeatherAddon) { return 0; }
