#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebContentTypePerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebContentTypePerRingDistribution: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkPerRingMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkPerRingMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkPerRingWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OfferingPerRingMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OfferingPerRingMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OfferingPerRingWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemPerRingMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemPerRingMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemPerRingWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddOnPerRingMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddOnPerRingMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddOnPerRingWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChestPerRingMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChestPerRingMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChestPerRingWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerksPackPerRingMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerksPackPerRingMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerksPackPerRingWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IridiscentShardsPackPerRingMinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IridiscentShardsPackPerRingMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IridiscentShardsPackPerRingWeight;

public:
	DEADBYDAYLIGHT_API FBloodwebContentTypePerRingDistribution();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebContentTypePerRingDistribution) { return 0; }
