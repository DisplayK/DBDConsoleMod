#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "PriceViewData.generated.h"

USTRUCT(BlueprintType)
struct FPriceViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Price;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Discount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAffordable;

public:
	DBDUIVIEWINTERFACES_API FPriceViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPriceViewData) { return 0; }
