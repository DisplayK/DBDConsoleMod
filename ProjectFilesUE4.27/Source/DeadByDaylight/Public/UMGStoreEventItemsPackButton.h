#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGStoreEventItemsPackButton.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UImage;
class UTextBlock;
class UUMGAtlEndDateTimerWidget;
class UUMGAtlStorePriceWidget;
class UUniformGridPanel;
class UUMGAtlEventItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGStoreEventItemsPackButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UImage* ImageIcon;

	UPROPERTY(Export)
	UTextBlock* TitleText;

	UPROPERTY(Export)
	UTextBlock* CurrencyAmountText;

	UPROPERTY(Export)
	UTextBlock* CurrencyNameText;

	UPROPERTY(Export)
	UUniformGridPanel* UniformGridPanel;

	UPROPERTY(Export)
	UUMGBaseButtonWidget* BuyButton;

	UPROPERTY(Export)
	UUMGAtlStorePriceWidget* StorePriceWidget;

	UPROPERTY(Export)
	UUMGAtlEndDateTimerWidget* EndDateTimerWidget;

	UPROPERTY(Export)
	UCanvasPanel* SelectedImageBox;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGAtlEventItemWidget> EventItemWidgetClassPtr;

	UPROPERTY(EditDefaultsOnly)
	int32 nbColumns;

private:
	UFUNCTION()
	void ShowSelectedCanvas();

	UFUNCTION()
	void HideSelectedCanvas();

	UFUNCTION()
	void HandleEndDateTimerReached();

	UFUNCTION()
	void HandleButtonClicked();

public:
	UUMGStoreEventItemsPackButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStoreEventItemsPackButton) { return 0; }
