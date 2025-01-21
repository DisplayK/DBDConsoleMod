#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebNodesPerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodesPerRingDistribution: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxCount;

public:
	DEADBYDAYLIGHT_API FBloodwebNodesPerRingDistribution();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebNodesPerRingDistribution) { return 0; }
