#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "HatchetCooldown.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHatchetCooldown : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UHatchetCooldown();
};

FORCEINLINE uint32 GetTypeHash(const UHatchetCooldown) { return 0; }
