#include "BaseSurvivorAnimInstance.h"

class ACamperPlayer;

bool UBaseSurvivorAnimInstance::IsPlayingMontageByName(FName montageId) const
{
	return false;
}

ACamperPlayer* UBaseSurvivorAnimInstance::GetOwningSurvivor() const
{
	return NULL;
}

UBaseSurvivorAnimInstance::UBaseSurvivorAnimInstance()
{
	this->_owningSurvivor = NULL;
}
