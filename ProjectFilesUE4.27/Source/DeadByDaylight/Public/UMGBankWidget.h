#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGBankWidget.generated.h"

class UUMGCurrencyWidget;
class UUMGAuricCellsButton;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBankWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCurrencyWidget* BloodPointsCurrency;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGAuricCellsButton* CellsButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGCurrencyWidget* IridescentShardsCurrency;

protected:
	UFUNCTION()
	void OnPurchaseAuricCellsClicked();

	UFUNCTION()
	void OnCurrencyTooltipRequested(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);

public:
	UUMGBankWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBankWidget) { return 0; }
