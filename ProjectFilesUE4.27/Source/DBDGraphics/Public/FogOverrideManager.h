#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FogOverrideManager.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFogOverrideManager : public UActorComponent
{
	GENERATED_BODY()

public:
	UFogOverrideManager();
};

FORCEINLINE uint32 GetTypeHash(const UFogOverrideManager) { return 0; }
