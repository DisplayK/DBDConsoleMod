#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "PurchasableOperationData.generated.h"

USTRUCT()
struct FPurchasableOperationData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName Id;

public:
	PURCHASABLEITEMS_API FPurchasableOperationData();
};

FORCEINLINE uint32 GetTypeHash(const FPurchasableOperationData) { return 0; }
