#include "OnboardingTutorialDefinition.h"

FOnboardingTutorialDefinition::FOnboardingTutorialDefinition()
{
	this->DisplayName = FText::GetEmpty();
	this->CompletedDisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->CompletedDescription = FText::GetEmpty();
	this->TutorialType = EOnboardingTutorialType::TutorialLevel;
	this->ButtonStyle = EOnboardingTutorialButtonStyle::Default;
	this->LevelId = TEXT("");
	this->Icon = NULL;
	this->DefaultCharacterId = 0;
}
