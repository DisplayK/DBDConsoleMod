#include "ImAllEars.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UImAllEars::Server_OnCamperLoudNoise_Implementation(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

bool UImAllEars::Server_OnCamperLoudNoise_Validate(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{
	return true;
}

float UImAllEars::GetDurationAtLevel()
{
	return 0.0f;
}

int32 UImAllEars::GetCooldownAtLevel()
{
	return 0;
}

UImAllEars::UImAllEars()
{
	this->_cooldownByLevel = 0;
	this->_durationByLevel = 0.000000;
	this->_useTerrorRadius = true;
	this->_triggerOutsideRadius = 1200.000000;
}
