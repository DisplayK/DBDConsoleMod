#pragma once

#include "CoreMinimal.h"
#include "RankGroupDefinition.generated.h"

USTRUCT(BlueprintType)
struct FRankGroupDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RankThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> PipThresholds;

public:
	DEADBYDAYLIGHT_API FRankGroupDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FRankGroupDefinition) { return 0; }
