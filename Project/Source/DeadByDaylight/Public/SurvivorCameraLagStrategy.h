#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorCameraLagStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorCameraLagStrategy : public UActorComponent
{
	GENERATED_BODY()

public:
	USurvivorCameraLagStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorCameraLagStrategy) { return 0; }
