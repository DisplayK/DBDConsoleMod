#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlantaPurchasePopup.generated.h"

class UUMGBaseButtonWidget;
class UHorizontalBox;
class UImage;
class UWidgetSwitcher;
class UUMGPurchaseBuyButton;
class UTextBlock;
class UUMGPurchaseSticker;
class UUMGPurchaseItemsInfo;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaPurchasePopup : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* LayoutSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* ImagePopup;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* OfferTextWithInfo;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* OfferText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TitleTextWithInfo;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TitleText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* DescriptionText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* ItemsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGPurchaseBuyButton* BuyButtonWithInfo;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGPurchaseBuyButton* BuyButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* CloseButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGPurchaseSticker* PurchaseSticker;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGPurchaseItemsInfo> PurchaseItemsInfoWidgetClass;

protected:
	UFUNCTION()
	void HandleCloseButtonClicked();

	UFUNCTION()
	void HandleBuyButtonClicked();

public:
	UUMGAtlantaPurchasePopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaPurchasePopup) { return 0; }
