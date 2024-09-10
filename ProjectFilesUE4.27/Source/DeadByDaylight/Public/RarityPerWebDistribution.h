#pragma once

#include "CoreMinimal.h"
#include "RarityPerWebDistribution.generated.h"

USTRUCT(BlueprintType)
struct FRarityPerWebDistribution
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxCount;

public:
	DEADBYDAYLIGHT_API FRarityPerWebDistribution();
};

FORCEINLINE uint32 GetTypeHash(const FRarityPerWebDistribution) { return 0; }
