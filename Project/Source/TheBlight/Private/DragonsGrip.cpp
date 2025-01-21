#include "DragonsGrip.h"

class ADBDPlayer;

void UDragonsGrip::Multicast_OnRevealSurvivor_Implementation(ADBDPlayer* survivor)
{

}

UDragonsGrip::UDragonsGrip()
{
	this->_kickedGenerator = NULL;
	this->_activationDuration = 0.000000;
	this->_cooldownDuration = 0.000000;
	this->_exposedEffectDuration = 0.000000;
	this->_onlyExposeFirstSurvivor = true;
}
