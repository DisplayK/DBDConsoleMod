#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGBaseRootStorefrontWidget.generated.h"

class UPanelWidget;
class UUMGBaseButtonWidget;
class UNamedSlot;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGBaseRootStorefrontWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UNamedSlot* StorePageSlot;

	UPROPERTY(meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* BackButton;

	UPROPERTY(meta=(BindWidgetOptional))
	UPanelWidget* CurrencyButtonsPanel;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* StorefrontTitle;

protected:
	UFUNCTION()
	void OnPurchaseAuricCellButtonPressed();

	UFUNCTION()
	void OnCurrencyButtonLongPressed(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);

	UFUNCTION()
	void OnBackButtonPressed();

public:
	UUMGBaseRootStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseRootStorefrontWidget) { return 0; }
