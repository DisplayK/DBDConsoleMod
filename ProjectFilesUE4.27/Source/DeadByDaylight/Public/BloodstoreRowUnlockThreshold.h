#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodstoreRowUnlockThreshold.generated.h"

USTRUCT(BlueprintType)
struct FBloodstoreRowUnlockThreshold: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PreviousRowPurchasedItemsCount;

public:
	DEADBYDAYLIGHT_API FBloodstoreRowUnlockThreshold();
};

FORCEINLINE uint32 GetTypeHash(const FBloodstoreRowUnlockThreshold) { return 0; }
