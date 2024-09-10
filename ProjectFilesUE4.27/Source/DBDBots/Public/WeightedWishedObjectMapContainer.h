#pragma once

#include "CoreMinimal.h"
#include "WeightedWishedObjectMapContainer.generated.h"

class UObject;

USTRUCT()
struct FWeightedWishedObjectMapContainer
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TMap<UObject*, float> WeightedWishedObjectMap;

public:
	DBDBOTS_API FWeightedWishedObjectMapContainer();
};

FORCEINLINE uint32 GetTypeHash(const FWeightedWishedObjectMapContainer) { return 0; }
