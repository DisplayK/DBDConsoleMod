#include "SoleSurvivor.h"

class ACamperPlayer;

void USoleSurvivor::Authority_OnSurvivorAdded(const ACamperPlayer* survivor)
{

}

USoleSurvivor::USoleSurvivor()
{
	this->_modifyActionSpeedWhenRepairingEffect = NULL;
	this->_modifyActionSpeedWhenOpeningGateOrHatchEffect = NULL;
	this->_actionSpeedsRepairing = 0.000000;
	this->_actionSpeedsOpeningGateOrHatch = 0.000000;
	this->_auraHideDistancePerDeadOrDisconnectedSurvivor = 0.000000;
	this->_otherSurvivors = TArray<ACamperPlayer*>();
}
