#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PollableEventListener.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPollableEventListener : public UActorComponent
{
	GENERATED_BODY()

public:
	UPollableEventListener();
};

FORCEINLINE uint32 GetTypeHash(const UPollableEventListener) { return 0; }
