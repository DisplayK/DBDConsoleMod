#include "UMGBankWidget.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"

void UUMGBankWidget::OnPurchaseAuricCellsClicked()
{

}

void UUMGBankWidget::OnCurrencyTooltipRequested(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType)
{

}

UUMGBankWidget::UUMGBankWidget()
{
	this->BloodPointsCurrency = NULL;
	this->CellsButton = NULL;
	this->IridescentShardsCurrency = NULL;
}
