#include "DemogorgonHuskAnimInstance.h"

class ASlasherPlayer;

void UDemogorgonHuskAnimInstance::OnKillerSet(ASlasherPlayer* killer)
{

}

UDemogorgonHuskAnimInstance::UDemogorgonHuskAnimInstance()
{
	this->_owningPawn = NULL;
	this->_teleportDuration = 0.000000;
	this->_teleportExitPlayRate = 0.000000;
	this->_isSlowerExit = false;
	this->_isTeleporting = false;
	this->_huskPortalSlowerExit = NULL;
	this->_huskPortalExit = NULL;
	this->_demogorgonPortalExit = NULL;
	this->_demogorgonPortalEntry = NULL;
	this->_demogorgonPortalPlacerState = NULL;
}
