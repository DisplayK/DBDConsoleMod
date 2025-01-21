#pragma once

#include "CoreMinimal.h"
#include "WeightedItem.h"
#include "EQuadrantSpawnType.h"
#include "QuadrantSpawnItem.generated.h"

USTRUCT(BlueprintType)
struct FQuadrantSpawnItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EQuadrantSpawnType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWeightedItem> Elements;

public:
	DEADBYDAYLIGHT_API FQuadrantSpawnItem();
};

FORCEINLINE uint32 GetTypeHash(const FQuadrantSpawnItem) { return 0; }
