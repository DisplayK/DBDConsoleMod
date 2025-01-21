#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorCartersSparkComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorCartersSparkComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USurvivorCartersSparkComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorCartersSparkComponent) { return 0; }
