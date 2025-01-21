#include "CoreArchiveMenuWidget.h"
#include "EPlayerRole.h"
#include "EArchiveMenuState.h"

class UCoreButtonWidget;
class UCoreSelectableButtonWidget;

void UCoreArchiveMenuWidget::OnSlotSelectionCancelled()
{

}

void UCoreArchiveMenuWidget::OnSlotSelected(EPlayerRole role)
{

}

void UCoreArchiveMenuWidget::OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreArchiveMenuWidget::OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreArchiveMenuWidget::OnInfoButtonClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveMenuWidget::OnChallengeReminderClick(UCoreButtonWidget* button)
{

}

FText UCoreArchiveMenuWidget::GetTimeRemainingLabelFromMenuState(EArchiveMenuState menuState)
{
	return FText::GetEmpty();
}

UCoreArchiveMenuWidget::UCoreArchiveMenuWidget()
{
	this->ArchiveMenuTabs = NULL;
	this->SurvivorChallengeSlot = NULL;
	this->KillerChallengeSlot = NULL;
	this->SlotSelector = NULL;
	this->BackInputSwitcher = NULL;
	this->InfoButton = NULL;
	this->_riftRemainingTimeText = FText::GetEmpty();
}
