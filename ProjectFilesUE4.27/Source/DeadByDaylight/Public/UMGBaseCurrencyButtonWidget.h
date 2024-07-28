#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "UMGBaseButtonWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseCurrencyButtonWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseCurrencyButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* FXImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CurrencyColorImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* CurrencyIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* PriceText;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor AffordableColor;

	UPROPERTY(EditDefaultsOnly)
	FSlateColor NotAffordableColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor DisabledOpacity;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor EnabledOpacity;

public:
	UUMGBaseCurrencyButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseCurrencyButtonWidget) { return 0; }
