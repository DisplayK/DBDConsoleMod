#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DeadHardInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDeadHardInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UDeadHardInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDeadHardInteraction) { return 0; }
