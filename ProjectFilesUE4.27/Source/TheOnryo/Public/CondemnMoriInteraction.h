#pragma once

#include "CoreMinimal.h"
#include "KillInteractionDefinition.h"
#include "CondemnMoriInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCondemnMoriInteraction : public UKillInteractionDefinition
{
	GENERATED_BODY()

public:
	UCondemnMoriInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCondemnMoriInteraction) { return 0; }
