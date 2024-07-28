#pragma once

#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "ItemAddonInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FItemAddonInitializationData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EInventoryItemType InventoryItemType;

	UPROPERTY()
	bool AuthorityDataSet;

public:
	DEADBYDAYLIGHT_API FItemAddonInitializationData();
};

FORCEINLINE uint32 GetTypeHash(const FItemAddonInitializationData) { return 0; }
