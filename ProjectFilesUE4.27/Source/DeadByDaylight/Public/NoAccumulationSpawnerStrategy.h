#pragma once

#include "CoreMinimal.h"
#include "SpawnerStrategy.h"
#include "NoAccumulationSpawnerStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNoAccumulationSpawnerStrategy : public USpawnerStrategy
{
	GENERATED_BODY()

public:
	UNoAccumulationSpawnerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UNoAccumulationSpawnerStrategy) { return 0; }
