#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "NodeContentDistributionValue.generated.h"

USTRUCT(BlueprintType)
struct FNodeContentDistributionValue: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Empty_Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Empty_MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Empty_MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Perks_Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Perks_MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Perks_MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerksPacks_Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerksPacks_MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerksPacks_MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Offerings_Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Offerings_MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Offerings_MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Items_Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Items_MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Items_MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddOn_Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddOn_MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddOn_MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Chests_Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Chests_MinCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Chests_MaxCount;

public:
	DEADBYDAYLIGHT_API FNodeContentDistributionValue();
};

FORCEINLINE uint32 GetTypeHash(const FNodeContentDistributionValue) { return 0; }
