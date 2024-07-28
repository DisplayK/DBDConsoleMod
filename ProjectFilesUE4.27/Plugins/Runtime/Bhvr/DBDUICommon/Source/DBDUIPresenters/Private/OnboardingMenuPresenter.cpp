#include "OnboardingMenuPresenter.h"
#include "EOnboardingMenuState.h"

void UOnboardingMenuPresenter::OnSetUIEnabled(bool enabled)
{

}

void UOnboardingMenuPresenter::OnMenuTabSelectedAgain(EOnboardingMenuState menuState)
{

}

void UOnboardingMenuPresenter::OnMenuTabSelected(EOnboardingMenuState menuState)
{

}

void UOnboardingMenuPresenter::OnBackAction()
{

}

UOnboardingMenuPresenter::UOnboardingMenuPresenter()
{
	this->OnboardingMenuWidgetClass = NULL;
	this->_onboardingTutorialSubPresenter = NULL;
	this->_gameManualSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
}
