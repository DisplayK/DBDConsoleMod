#include "K25P03.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class ACamperPlayer;

void UK25P03::OnSurvivorRemoved(ACamperPlayer* survivor)
{

}

void UK25P03::OnDamageStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void UK25P03::OnCamperUnhookedFromScourgeHook(const FGameEventData& gameEventData)
{

}

UK25P03::UK25P03()
{
	this->_numberOfSurvivorsWaitingForDamageStateChange = 0;
	this->_state2ActionSpeedDebuffPercentage = 0.000000;
}
