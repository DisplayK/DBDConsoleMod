#pragma once

#include "CoreMinimal.h"
#include "RarityPerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FRarityPerRingDistribution
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> WeightList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> MinCountList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> MaxCountList;

public:
	DEADBYDAYLIGHT_API FRarityPerRingDistribution();
};

FORCEINLINE uint32 GetTypeHash(const FRarityPerRingDistribution) { return 0; }
