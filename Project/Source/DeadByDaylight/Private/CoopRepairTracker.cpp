#include "CoopRepairTracker.h"

class ADBDPlayer;

void UCoopRepairTracker::SetHasEverCoopRepaired(const ADBDPlayer* player)
{

}

bool UCoopRepairTracker::HasEverCoopRepaired(const ADBDPlayer* player) const
{
	return false;
}

UCoopRepairTracker::UCoopRepairTracker()
{
	this->_coopRepairerHistory = TArray<ADBDPlayer*>();
}
