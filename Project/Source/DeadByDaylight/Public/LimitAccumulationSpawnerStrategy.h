#pragma once

#include "CoreMinimal.h"
#include "SpawnerStrategy.h"
#include "LimitAccumulationSpawnerStrategy.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULimitAccumulationSpawnerStrategy : public USpawnerStrategy
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetRecycleThresholdPercentage(float recycleThresholdPercentage);

	UFUNCTION(BlueprintCallable)
	void SetRecycleDistancePercentage(float recycleDistancePercentage);

	UFUNCTION(BlueprintCallable)
	void SetMaxOverlapping(int32 maxOverlapping);

public:
	ULimitAccumulationSpawnerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULimitAccumulationSpawnerStrategy) { return 0; }
