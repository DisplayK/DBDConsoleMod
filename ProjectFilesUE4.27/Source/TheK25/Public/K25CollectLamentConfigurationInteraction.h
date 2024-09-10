#pragma once

#include "CoreMinimal.h"
#include "CollectItemInteraction.h"
#include "K25CollectLamentConfigurationInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25CollectLamentConfigurationInteraction : public UCollectItemInteraction
{
	GENERATED_BODY()

public:
	UK25CollectLamentConfigurationInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25CollectLamentConfigurationInteraction) { return 0; }
