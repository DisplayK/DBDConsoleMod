#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGPurchaseCurrencyWidget.generated.h"

class UTextBlock;
class UOverlay;
class UImage;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGPurchaseCurrencyWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* PercentageDiscountText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CurrencyIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* PriceText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* UndiscountedPrice;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CurrencyColorImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* OriginalPriceOverlay;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* DiscountCanvas;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor AffordableColor;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor NotAffordableColor;

public:
	UUMGPurchaseCurrencyWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPurchaseCurrencyWidget) { return 0; }
