#pragma once

#include "CoreMinimal.h"
#include "PowerViewData.h"
#include "AddonViewData.h"
#include "PowerBundleViewData.generated.h"

USTRUCT(BlueprintType)
struct FPowerBundleViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPowerViewData Power;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAddonViewData Addon1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAddonViewData Addon2;

public:
	DBDUIVIEWINTERFACES_API FPowerBundleViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPowerBundleViewData) { return 0; }
