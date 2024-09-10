#include "CoreStoryLevelsSelectorWidget.h"
#include "EArchivesStoryLevelStatus.h"

class UCoreStoryLevelButtonWidget;
class UArchiveStoryLevelViewData;

void UCoreStoryLevelsSelectorWidget::UpdateLevelStatus(const int32 level, const EArchivesStoryLevelStatus status)
{

}

void UCoreStoryLevelsSelectorWidget::SetUpInteractionMode()
{

}

void UCoreStoryLevelsSelectorWidget::SetEnabled(bool enabled)
{

}

void UCoreStoryLevelsSelectorWidget::SetData(const TArray<UArchiveStoryLevelViewData*>& levelbuttonsData)
{

}

void UCoreStoryLevelsSelectorWidget::OnStoryLevelUnlockedAnimation()
{

}

UCoreStoryLevelButtonWidget* UCoreStoryLevelsSelectorWidget::GetStoryLevelButton(int32 level) const
{
	return NULL;
}

void UCoreStoryLevelsSelectorWidget::AdaptButtonsPoolToData(int32 dataNumber)
{

}

UCoreStoryLevelsSelectorWidget::UCoreStoryLevelsSelectorWidget()
{
	this->IsReadOnly = false;
	this->CoreStoryLevelButtonWidgetClass = NULL;
	this->LevelButtonsContainer = NULL;
	this->PreviousLevelInputSwitcher = NULL;
	this->NextLevelInputSwitcher = NULL;
	this->_levelButtonsData = TArray<UArchiveStoryLevelViewData*>();
}
