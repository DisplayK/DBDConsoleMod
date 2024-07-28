#include "PalletAnimInstance.h"

class ADBDPlayer;

void UPalletAnimInstance::OnBeingPulledUpStopped()
{

}

void UPalletAnimInstance::OnBeingPulledUpStarted(ADBDPlayer* player)
{

}

void UPalletAnimInstance::OnBeingDestroyedStopped()
{

}

void UPalletAnimInstance::OnBeingDestroyedStarted(ADBDPlayer* player)
{

}

UPalletAnimInstance::UPalletAnimInstance()
{
	this->_isPulledDown = false;
	this->_isBeingPulledUp = false;
	this->_isBeingDestroyed = false;
	this->_isBeingDestroyedPlayRate = 0.000000;
}
