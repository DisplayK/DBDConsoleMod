#include "TeleportToPhantomTrap.h"

class ASlasherPlayer;
class APhantomTrap;

float UTeleportToPhantomTrap::GetTeleportMaxDistance(ASlasherPlayer* slasher) const
{
	return 0.0f;
}

APhantomTrap* UTeleportToPhantomTrap::GetPhantomTrap() const
{
	return NULL;
}

UTeleportToPhantomTrap::UTeleportToPhantomTrap()
{
	this->_hagSlowdownAfterTeleportEffectID = TEXT("HagSlowdownAfterTeleportEffect");
}
