#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeldInputInteractionStarter.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHeldInputInteractionStarter : public UActorComponent
{
	GENERATED_BODY()

public:
	UHeldInputInteractionStarter();
};

FORCEINLINE uint32 GetTypeHash(const UHeldInputInteractionStarter) { return 0; }
