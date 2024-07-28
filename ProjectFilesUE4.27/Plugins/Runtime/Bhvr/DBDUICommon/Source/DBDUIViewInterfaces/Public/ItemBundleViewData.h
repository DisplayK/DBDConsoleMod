#pragma once

#include "CoreMinimal.h"
#include "ItemViewData.h"
#include "AddonViewData.h"
#include "ItemBundleViewData.generated.h"

USTRUCT(BlueprintType)
struct FItemBundleViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemViewData Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAddonViewData Addon1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAddonViewData Addon2;

public:
	DBDUIVIEWINTERFACES_API FItemBundleViewData();
};

FORCEINLINE uint32 GetTypeHash(const FItemBundleViewData) { return 0; }
