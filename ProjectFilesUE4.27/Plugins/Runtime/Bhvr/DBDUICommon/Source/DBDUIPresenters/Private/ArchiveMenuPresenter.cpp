#include "ArchiveMenuPresenter.h"
#include "EArchiveMenuState.h"
#include "EPlayerRole.h"

void UArchiveMenuPresenter::OnSlotSelectorClosed()
{

}

void UArchiveMenuPresenter::OnMenuTabSelected(EArchiveMenuState menuState, bool alreadySelected)
{

}

void UArchiveMenuPresenter::OnInfoClicked()
{

}

void UArchiveMenuPresenter::OnChallengeReminderSlotSelected(EPlayerRole role)
{

}

void UArchiveMenuPresenter::OnChallengeReminderClicked(EPlayerRole role)
{

}

void UArchiveMenuPresenter::OnBackAction()
{

}

UArchiveMenuPresenter::UArchiveMenuPresenter()
{
	this->ArchiveMenuWidgetClass = NULL;
	this->_archiveTomeSubPresenter = NULL;
	this->_archiveRiftSubPresenter = NULL;
	this->_archiveCompendiumSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
}
