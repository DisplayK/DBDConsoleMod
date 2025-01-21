#pragma once

#include "CoreMinimal.h"
#include "InteractionRespawnableTrigger.h"
#include "TimedInteractionRespawnableTrigger.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UTimedInteractionRespawnableTrigger : public UInteractionRespawnableTrigger
{
	GENERATED_BODY()

public:
	UTimedInteractionRespawnableTrigger();
};

FORCEINLINE uint32 GetTypeHash(const UTimedInteractionRespawnableTrigger) { return 0; }
