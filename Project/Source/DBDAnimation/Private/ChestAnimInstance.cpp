#include "ChestAnimInstance.h"

class ADBDPlayer;

void UChestAnimInstance::OnSearchedChanged(bool searched)
{

}

void UChestAnimInstance::OnBeingPriedOpenStopped()
{

}

void UChestAnimInstance::OnBeingPriedOpenStarted(ADBDPlayer* player)
{

}

UChestAnimInstance::UChestAnimInstance()
{
	this->_owningChest = NULL;
	this->_isOpen = false;
	this->_isBeingPriedOpen = false;
	this->_openChestInteraction = NULL;
}
