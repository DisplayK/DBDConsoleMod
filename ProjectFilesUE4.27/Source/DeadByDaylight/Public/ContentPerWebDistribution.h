#pragma once

#include "CoreMinimal.h"
#include "ContentPerWebDistribution.generated.h"

USTRUCT(BlueprintType)
struct FContentPerWebDistribution
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	int32 CumulativeWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxCount;

public:
	DEADBYDAYLIGHT_API FContentPerWebDistribution();
};

FORCEINLINE uint32 GetTypeHash(const FContentPerWebDistribution) { return 0; }
