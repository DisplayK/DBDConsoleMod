#include "VaultDefinition.h"

class UCurveFloat;
class ADBDPlayer;

bool UVaultDefinition::ShouldLaunchCharacter(const ADBDPlayer* player) const
{
	return false;
}

bool UVaultDefinition::IsWithinHeightDelta(const ADBDPlayer* player) const
{
	return false;
}

bool UVaultDefinition::IsWindowVaultable() const
{
	return false;
}

UCurveFloat* UVaultDefinition::GetSpeedCurveToUse() const
{
	return NULL;
}

UVaultDefinition::UVaultDefinition()
{
	this->_feetOffGroundID = TEXT("FeetOffGround");
	this->_feetOnGroundID = TEXT("FeetOnGround");
	this->_allowedHeightDelta = 60.000000;
	this->_animationPlayRate = 0.000000;
	this->_scaledElapsedTime = 0.000000;
	this->_vaultSpeedCurve = NULL;
	this->_isFall = false;
}
