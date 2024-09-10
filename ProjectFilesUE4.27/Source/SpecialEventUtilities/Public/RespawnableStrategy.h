#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RespawnableStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawnableStrategy : public UActorComponent
{
	GENERATED_BODY()

public:
	URespawnableStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URespawnableStrategy) { return 0; }
