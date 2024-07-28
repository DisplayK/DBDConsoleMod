#pragma once

#include "CoreMinimal.h"
#include "ContentPerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FContentPerRingDistribution
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
	DEADBYDAYLIGHT_API FContentPerRingDistribution();
};

FORCEINLINE uint32 GetTypeHash(const FContentPerRingDistribution) { return 0; }
