#pragma once

#include "CoreMinimal.h"
#include "CurrencyExpirationLabelViewData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyExpirationLabelViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(BlueprintReadWrite, Transient)
	FText ExpirationDate;

public:
	DBDUIVIEWINTERFACES_API FCurrencyExpirationLabelViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyExpirationLabelViewData) { return 0; }
