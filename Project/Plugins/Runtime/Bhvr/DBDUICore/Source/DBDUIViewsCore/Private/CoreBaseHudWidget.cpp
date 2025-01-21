#include "CoreBaseHudWidget.h"

bool UCoreBaseHudWidget::ShouldPlayFocusAnimation_Implementation() const
{
	return false;
}

void UCoreBaseHudWidget::PlayFocusAnimation_Implementation()
{

}

UCoreBaseHudWidget::UCoreBaseHudWidget()
{
	this->FocusAnimationDuration = 1.500000;
	this->FocusAnimationDelay = 1.500000;
	this->FocusAnimationEasing = EEasingType::Linear;
	this->FocusAnimationMaxOpacity = 1.000000;
	this->FocusAnimationMinOpacity = 0.400000;
}
