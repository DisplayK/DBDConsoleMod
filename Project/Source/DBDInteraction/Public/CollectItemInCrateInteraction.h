#pragma once

#include "CoreMinimal.h"
#include "CollectItemInteraction.h"
#include "CollectItemInCrateInteraction.generated.h"

class ASupplyCrateInteractable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCollectItemInCrateInteraction : public UCollectItemInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ASupplyCrateInteractable* _owningSupplyCrate;

public:
	UCollectItemInCrateInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCollectItemInCrateInteraction) { return 0; }
