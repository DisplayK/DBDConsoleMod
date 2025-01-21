#include "CoreArchiveLevelProgressionWidget.h"

class UCoreSelectableButtonWidget;

void UCoreArchiveLevelProgressionWidget::OnTomeLevelUnlockedAnimation()
{

}

void UCoreArchiveLevelProgressionWidget::OnStoryLevelSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

UCoreArchiveLevelProgressionWidget::UCoreArchiveLevelProgressionWidget()
{
	this->StoryLevelsSelector = NULL;
	this->LevelNumberTF = NULL;
	this->LevelCompletionTF = NULL;
	this->SideContent = NULL;
}
