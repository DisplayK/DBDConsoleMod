#include "CoreArchiveVignetteEntryContainerWidget.h"

class UUITweenInstance;

void UCoreArchiveVignetteEntryContainerWidget::OnUnlockProgress(UUITweenInstance* tween)
{

}

void UCoreArchiveVignetteEntryContainerWidget::OnUnlockComplete(UUITweenInstance* tween)
{

}

UCoreArchiveVignetteEntryContainerWidget::UCoreArchiveVignetteEntryContainerWidget()
{
	this->JournalProgressBar = NULL;
	this->AnimationEasing = EEasingType::Linear;
	this->ProgressAnimationDuration = 0.000000;
}
