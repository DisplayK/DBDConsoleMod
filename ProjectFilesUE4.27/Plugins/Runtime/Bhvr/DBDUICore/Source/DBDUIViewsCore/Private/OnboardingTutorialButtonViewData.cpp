#include "OnboardingTutorialButtonViewData.h"

FOnboardingTutorialButtonViewData::FOnboardingTutorialButtonViewData()
{
	this->StepStatus = EOnboardingStepStatus::Unavailable;
	this->StepId = TEXT("");
	this->TutorialId = TEXT("");
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Icon = NULL;
	this->RewardsData = TArray<FRewardWrapperViewData>();
	this->ButtonStyle = EOnboardingTutorialButtonStyle::Default;
}
