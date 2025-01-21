#pragma once

#include "CoreMinimal.h"
#include "ItemCraftInteraction.h"
#include "InClosetFlashbangItemCraftInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInClosetFlashbangItemCraftInteraction : public UItemCraftInteraction
{
	GENERATED_BODY()

public:
	UInClosetFlashbangItemCraftInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UInClosetFlashbangItemCraftInteraction) { return 0; }
