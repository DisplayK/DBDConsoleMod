#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "RankNameData.generated.h"

USTRUCT(BlueprintType)
struct FRankNameData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText RankName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SubRanks;

public:
	DEADBYDAYLIGHT_API FRankNameData();
};

FORCEINLINE uint32 GetTypeHash(const FRankNameData) { return 0; }
