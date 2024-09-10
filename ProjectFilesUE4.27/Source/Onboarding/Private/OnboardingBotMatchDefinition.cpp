#include "OnboardingBotMatchDefinition.h"

FOnboardingBotMatchDefinition::FOnboardingBotMatchDefinition()
{
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->DefaultMapId = NAME_None;
	this->DefaultSurvivorId = 0;
	this->DefaultKillerId = 0;
	this->DefaultBotsId = TArray<int32>();
}
