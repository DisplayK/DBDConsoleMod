#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "SacrificeSurvivorInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API USacrificeSurvivorInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	USacrificeSurvivorInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USacrificeSurvivorInteraction) { return 0; }
