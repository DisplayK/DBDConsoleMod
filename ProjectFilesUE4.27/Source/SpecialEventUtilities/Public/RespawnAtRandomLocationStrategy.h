#pragma once

#include "CoreMinimal.h"
#include "RespawnableStrategy.h"
#include "RespawnAtRandomLocationStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawnAtRandomLocationStrategy : public URespawnableStrategy
{
	GENERATED_BODY()

public:
	URespawnAtRandomLocationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URespawnAtRandomLocationStrategy) { return 0; }
