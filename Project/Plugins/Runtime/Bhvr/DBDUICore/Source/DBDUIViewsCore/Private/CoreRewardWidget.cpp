#include "CoreRewardWidget.h"

class UCoreLockedOverlayWidget;

void UCoreRewardWidget::SetIsLocked(bool isLocked, bool useAnimation)
{

}

UCoreLockedOverlayWidget* UCoreRewardWidget::GetLockedOverlay()
{
	return NULL;
}

UCoreRewardWidget::UCoreRewardWidget()
{
	this->RewardIcon = NULL;
	this->LockedOverlay = NULL;
	this->OnHoverBorder = NULL;
}
