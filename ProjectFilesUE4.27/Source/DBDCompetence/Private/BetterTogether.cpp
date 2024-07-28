#include "BetterTogether.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UBetterTogether::OnStartedGeneratorRepair(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

float UBetterTogether::GetRevealDistance()
{
	return 0.0f;
}

UBetterTogether::UBetterTogether()
{
	this->ShouldRevealKiller = true;
	this->ShouldRevealSurvivors = true;
	this->RevealDistance = 3600.000000;
	this->_affectedCampers = TArray<ADBDPlayer*>();
	this->_genToReveal = NULL;
	this->_durationByLevel = 0.000000;
	this->_timedSurvivorRevealEffect = NULL;
	this->_timedKillerRevealEffect = NULL;
}
