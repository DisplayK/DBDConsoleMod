#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "PurchaseCurrencyData.h"
#include "UMGCharacterPrice.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrice : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* PriceTextBlock;

	UPROPERTY(BlueprintReadOnly)
	FColor AffordableColor;

	UPROPERTY(BlueprintReadOnly)
	FColor UnaffordableColor;

public:
	UFUNCTION()
	void SetCurrencyData(const FPurchaseCurrencyData& currencyData);

public:
	UUMGCharacterPrice();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterPrice) { return 0; }
