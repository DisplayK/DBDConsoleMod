#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CurrencyPurchaseData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyPurchaseData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString IconPath;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString CurrencyName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString CurrencyIcon;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 CurrencyAmount;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString DisplayedPrice;

	UPROPERTY(BlueprintReadOnly, Transient)
	float BonusPercentage;

	UPROPERTY(BlueprintReadOnly, Transient)
	FDateTime BonusEndDate;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 BasicCurrencyAmount;

public:
	DEADBYDAYLIGHT_API FCurrencyPurchaseData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyPurchaseData) { return 0; }
