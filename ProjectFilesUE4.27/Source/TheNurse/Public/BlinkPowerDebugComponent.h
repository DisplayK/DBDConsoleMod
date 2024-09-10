#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlinkPowerDebugComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPowerDebugComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UBlinkPowerDebugComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkPowerDebugComponent) { return 0; }
