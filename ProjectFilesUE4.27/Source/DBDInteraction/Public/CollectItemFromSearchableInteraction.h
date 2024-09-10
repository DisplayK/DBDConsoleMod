#pragma once

#include "CoreMinimal.h"
#include "CollectItemInteraction.h"
#include "CollectItemFromSearchableInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UCollectItemFromSearchableInteraction : public UCollectItemInteraction
{
	GENERATED_BODY()

public:
	UCollectItemFromSearchableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCollectItemFromSearchableInteraction) { return 0; }
