#include "OnboardingStepViewData.h"

FOnboardingStepViewData::FOnboardingStepViewData()
{
	this->StepId = TEXT("");
	this->Status = EOnboardingStepStatus::Unavailable;
	this->Tutorials = TArray<FOnboardingTutorialViewData>();
}
