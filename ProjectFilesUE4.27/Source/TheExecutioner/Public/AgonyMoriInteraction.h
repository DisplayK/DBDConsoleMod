#pragma once

#include "CoreMinimal.h"
#include "KillInteractionDefinition.h"
#include "AgonyMoriInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UAgonyMoriInteraction : public UKillInteractionDefinition
{
	GENERATED_BODY()

public:
	UAgonyMoriInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UAgonyMoriInteraction) { return 0; }
