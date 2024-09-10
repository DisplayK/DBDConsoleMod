#include "Diversion.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"

void UDiversion::Authority_OnOwningSurvivorImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState)
{

}

void UDiversion::Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

UDiversion::UDiversion()
{
	this->_diversionActivationTimePerLevel = 0.000000;
	this->_throwPebbleDistance = 20.000000;
}
