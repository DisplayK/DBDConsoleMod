#include "CoreArchiveTomeWidget.h"

class UCoreSelectableButtonWidget;

void UCoreArchiveTomeWidget::OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

UCoreArchiveTomeWidget::UCoreArchiveTomeWidget()
{
	this->_archiveQuestEditorWidgetClass = NULL;
	this->_archiveQuestEditorWidget = NULL;
	this->ArchiveTomeSideNav = NULL;
	this->EditorSwitcher = NULL;
}
