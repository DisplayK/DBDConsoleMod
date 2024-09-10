#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "BloodwebNodeCost.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodeCost: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Cost;

public:
	DEADBYDAYLIGHT_API FBloodwebNodeCost();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebNodeCost) { return 0; }
