#include "RemoveTwin.h"
#include "AnimationMontageDescriptor.h"

class ADBDPlayer;

void URemoveTwin::OnRemoveMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted, ADBDPlayer* destroyingPlayer)
{

}

URemoveTwin::URemoveTwin()
{
	this->_brotherRemoveDistanceFromSurvivor = 50.000000;
}
