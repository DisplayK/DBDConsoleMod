#include "K30Addon20.h"
#include "GameplayTagContainer.h"
#include "EGuardHuntEndReason.h"
#include "GameEventData.h"

class AWindow;
class ADBDPlayer;

void UK30Addon20::Authority_OnTrailCameraGoThroughWindow(AWindow* window)
{

}

void UK30Addon20::Authority_OnStartHunt(ADBDPlayer* player)
{

}

void UK30Addon20::Authority_OnHuntedSurvivorVault(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UK30Addon20::Authority_OnEndHunt(ADBDPlayer* player, EGuardHuntEndReason huntEndReason)
{

}

UK30Addon20::UK30Addon20()
{
	this->_blockedWindows = TArray<AWindow*>();
	this->_huntedSurvivor = NULL;
	this->_gateBlockerEffectClass = NULL;
	this->_trailPassThroughWindowBlockTime = 15.000000;
}
