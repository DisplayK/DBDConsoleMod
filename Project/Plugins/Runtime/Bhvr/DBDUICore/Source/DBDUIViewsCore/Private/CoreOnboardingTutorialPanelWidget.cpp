#include "CoreOnboardingTutorialPanelWidget.h"

void UCoreOnboardingTutorialPanelWidget::NextPendingButtonUpdated()
{

}

void UCoreOnboardingTutorialPanelWidget::CheckNextPendingButtonUpdate()
{

}

UCoreOnboardingTutorialPanelWidget::UCoreOnboardingTutorialPanelWidget()
{
	this->TutorialButtons = TArray<UCoreOnboardingTutorialButtonWidget*>();
	this->LoadingWidget = NULL;
	this->_pendingData = TArray<FPendingStepData>();
}
