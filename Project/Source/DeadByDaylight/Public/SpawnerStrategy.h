#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnerStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USpawnerStrategy : public UObject
{
	GENERATED_BODY()

public:
	USpawnerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USpawnerStrategy) { return 0; }
