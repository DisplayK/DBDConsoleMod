#pragma once

#include "CoreMinimal.h"
#include "SearchChestInteractionBase.h"
#include "SearchOpenedChestInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USearchOpenedChestInteraction : public USearchChestInteractionBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FName> _rummagePrioritySources;

public:
	USearchOpenedChestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USearchOpenedChestInteraction) { return 0; }
