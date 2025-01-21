#include "SupplyCrateAnimInstance.h"

class ADBDPlayer;

void USupplyCrateAnimInstance::OnBeingPriedOpenStopped()
{

}

void USupplyCrateAnimInstance::OnBeingPriedOpenStarted(ADBDPlayer* player)
{

}

USupplyCrateAnimInstance::USupplyCrateAnimInstance()
{
	this->_owningSupplyCrate = NULL;
	this->_isOpen = false;
	this->_isBeingPriedOpen = false;
	this->_isAutoClosing = false;
}
