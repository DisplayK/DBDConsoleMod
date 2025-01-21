#include "ArchiveTomeSubPresenter.h"
#include "EArchiveTomeMenuState.h"

void UArchiveTomeSubPresenter::OnMenuTabSelected(EArchiveTomeMenuState menuState)
{

}

void UArchiveTomeSubPresenter::OnEditorWidgetSwitchComplete()
{

}

UArchiveTomeSubPresenter::UArchiveTomeSubPresenter()
{
	this->_archiveQuestMapSubPresenter = NULL;
	this->_archiveEditorSubPresenter = NULL;
	this->_archiveJournalSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
	this->_archiveTomeWidget = NULL;
	this->_archiveSideNavSkinMaterial = NULL;
}
