#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECurrencyType.h"
#include "UMGCustomizationItemPriceWidget.h"
#include "UMGCustomizationItemBuyButton.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationItemBuyButton : public UUMGCustomizationItemPriceWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CurrencyColorStripe;

	UPROPERTY(EditDefaultsOnly)
	TMap<ECurrencyType, FColor> _currencyStripeColors;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _disabledOpacity;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _enabledOpacity;

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastUnlockWithCurrency();

public:
	UUMGCustomizationItemBuyButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationItemBuyButton) { return 0; }
