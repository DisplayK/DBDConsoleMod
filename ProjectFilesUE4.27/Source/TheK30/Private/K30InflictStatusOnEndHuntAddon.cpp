#include "K30InflictStatusOnEndHuntAddon.h"
#include "EGuardHuntEndReason.h"

class ADBDPlayer;

void UK30InflictStatusOnEndHuntAddon::Authority_OnEndHunt(ADBDPlayer* player, EGuardHuntEndReason huntEndReason)
{

}

UK30InflictStatusOnEndHuntAddon::UK30InflictStatusOnEndHuntAddon()
{
	this->_huntEndReasonsToApplyEffect = TArray<EGuardHuntEndReason>();
}
