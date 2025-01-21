#include "CoreArchiveChallengeReminderSlotWidget.h"
#include "ArchiveChallengeReminderViewData.h"
#include "EPlayerRole.h"

void UCoreArchiveChallengeReminderSlotWidget::SetSlotSelectorState(bool isSelectorOpen)
{

}

void UCoreArchiveChallengeReminderSlotWidget::SetData(const FArchiveChallengeReminderViewData& data)
{

}

void UCoreArchiveChallengeReminderSlotWidget::Init(EPlayerRole role)
{

}

void UCoreArchiveChallengeReminderSlotWidget::ClearData()
{

}

UCoreArchiveChallengeReminderSlotWidget::UCoreArchiveChallengeReminderSlotWidget()
{
	this->Node = NULL;
	this->EmptySlotImage = NULL;
	this->InactiveBG = NULL;
	this->ActiveBG = NULL;
	this->SmokeBackground = NULL;
	this->ProgressBar = NULL;
	this->SelectorHighlight = NULL;
	this->TitleTB = NULL;
	this->SubtitleTB = NULL;
	this->InactiveTitleTB = NULL;
	this->InactiveSubtitleTB = NULL;
	this->OnHoverBorder = NULL;
	this->_slotRole = EPlayerRole::VE_None;
	this->_hasActiveHoverEffect = false;
}
