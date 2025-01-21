#include "OnryoAnimInstance.h"

UOnryoAnimInstance::UOnryoAnimInstance()
{
	this->_isTeleporting = false;
	this->_isStartingUpTeleport = false;
	this->_teleportStartUpDuration = 0.000000;
	this->_isCrawlingOutOfTV = false;
	this->_crawlingOutDuration = 0.000000;
	this->_isTeleportCancelled = false;
	this->_teleportCancelledDuration = 0.000000;
	this->_isEnteringManifest = false;
	this->_isExitingManifest = false;
	this->_isInOtherWorld = true;
}
