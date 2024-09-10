#include "CoreStoryLevelButtonWidget.h"
#include "EArchivesStoryLevelStatus.h"

class UArchiveStoryLevelViewData;

void UCoreStoryLevelButtonWidget::UpdateStatusData(EArchivesStoryLevelStatus newStatus, bool isSelectorReadOnly)
{

}

void UCoreStoryLevelButtonWidget::SetData(const UArchiveStoryLevelViewData* viewData, bool isSelectorReadOnly)
{

}

int32 UCoreStoryLevelButtonWidget::GetLevel() const
{
	return 0;
}

UCoreStoryLevelButtonWidget::UCoreStoryLevelButtonWidget()
{
	this->_tooltipText = FText::GetEmpty();
	this->_lockedLevelTimeFormat = ERemainingTimeFormat::Short;
}
