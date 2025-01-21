#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K28KillerPlayerViewComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28KillerPlayerViewComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UK28KillerPlayerViewComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerPlayerViewComponent) { return 0; }
