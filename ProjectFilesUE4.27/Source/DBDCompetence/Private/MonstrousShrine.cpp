#include "MonstrousShrine.h"
#include "GameEventData.h"

void UMonstrousShrine::Authority_OnSurvivorUnhookedOnScourgeHook(const FGameEventData& gameEventData)
{

}

void UMonstrousShrine::Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData)
{

}

UMonstrousShrine::UMonstrousShrine()
{
	this->_fasterDrainPercentage = 0.000000;
	this->_fasterDrainOnScourgeHookEffect = NULL;
}
