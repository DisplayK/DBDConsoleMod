#include "UMGPartySlotsWidget.h"
#include "EPartyPlayerSlotWidgetState.h"

void UUMGPartySlotsWidget::SwapWidgets(int32 first, int32 second)
{

}

void UUMGPartySlotsWidget::SetWidgetState(int32 index, EPartyPlayerSlotWidgetState state)
{

}

void UUMGPartySlotsWidget::RearrangePartySlots()
{

}

void UUMGPartySlotsWidget::HandleKickPlayerButtonClickEvent(const FString& friendKrakenId)
{

}

void UUMGPartySlotsWidget::HandleInviteFriendButtonClickEvent()
{

}

void UUMGPartySlotsWidget::HandleBotEditButtonClickEvent(const int32 index)
{

}

UUMGPartySlotsWidget::UUMGPartySlotsWidget()
{
	this->PartyPlayerSlotsContainer = NULL;
	this->_partyPlayerSlots = TArray<UUMGPartyPlayerSlotWidget*>();
	this->PartyBotSlotsContainer = NULL;
	this->PartyBotSlotWidgetClass = NULL;
	this->MaxSlotCount = 5;
}
