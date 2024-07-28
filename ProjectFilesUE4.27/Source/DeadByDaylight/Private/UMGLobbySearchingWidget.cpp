#include "UMGLobbySearchingWidget.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"

void UUMGLobbySearchingWidget::OnRankTooltipTriggered(const FTooltipPressedData& tooltipPressedData)
{

}

void UUMGLobbySearchingWidget::OnLevelTooltipTriggered(const FTooltipPressedData& tooltipPressedData)
{

}

void UUMGLobbySearchingWidget::OnCurrencyTooltipTriggered(const FTooltipPressedData& tooltipPressedData, ECurrencyType currencyType)
{

}

void UUMGLobbySearchingWidget::HandleLeaveButtonClicked()
{

}

UUMGLobbySearchingWidget::UUMGLobbySearchingWidget()
{
	this->BankAndPlayerInfoWidget = NULL;
	this->ItemOrPowerText = FText::GetEmpty();
	this->AddonText = FText::GetEmpty();
	this->OfferingText = FText::GetEmpty();
	this->PerksText = FText::GetEmpty();
	this->TextWaitingForPlayers = FText::GetEmpty();
	this->TextEstimatedTimeTitle = FText::GetEmpty();
	this->ButtonCancelSearching = NULL;
	this->PartySlots = NULL;
}
