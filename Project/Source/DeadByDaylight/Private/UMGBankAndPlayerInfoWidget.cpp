#include "UMGBankAndPlayerInfoWidget.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"

void UUMGBankAndPlayerInfoWidget::OnTooltipTriggeredByRankBanner(const FTooltipPressedData& tooltipPressedData)
{

}

void UUMGBankAndPlayerInfoWidget::OnTooltipTriggeredByLevelBannerWidget(const FTooltipPressedData& tooltipPressedData)
{

}

void UUMGBankAndPlayerInfoWidget::OnTooltipTriggeredByCurrency(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType)
{

}

void UUMGBankAndPlayerInfoWidget::OnPurchaseAuricCellsButtonClicked()
{

}

void UUMGBankAndPlayerInfoWidget::OnPrestigeButtonClicked()
{

}

void UUMGBankAndPlayerInfoWidget::OnMainMenuSubscriptionClicked()
{

}

void UUMGBankAndPlayerInfoWidget::OnCancelPartyButtonClicked()
{

}

UUMGBankAndPlayerInfoWidget::UUMGBankAndPlayerInfoWidget()
{
	this->BankWidget = NULL;
	this->PlayerNameText = NULL;
	this->SelectedCharacterWidget = NULL;
	this->RankWidgetVisibility = ESlateVisibility::Visible;
	this->LevelBanner = NULL;
	this->RankBanner = NULL;
	this->MonthlyPassButton = NULL;
}
