#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "BloodwebNodeRarityCost.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebNodeRarityCost: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Cost;

public:
	DEADBYDAYLIGHT_API FBloodwebNodeRarityCost();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebNodeRarityCost) { return 0; }
