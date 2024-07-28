#include "OnboardingTutorialViewData.h"

FOnboardingTutorialViewData::FOnboardingTutorialViewData()
{
	this->TutorialId = TEXT("");
	this->Completed = false;
	this->MainRewardClaimed = false;
	this->MainRewards = TArray<FRewardWrapperViewData>();
	this->AlternativeRewards = TArray<FRewardWrapperViewData>();
	this->TutorialType = EOnboardingTutorialType::TutorialLevel;
	this->ButtonStyle = EOnboardingTutorialButtonStyle::Default;
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Icon = NULL;
}
