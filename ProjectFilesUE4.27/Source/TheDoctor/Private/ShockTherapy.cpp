#include "ShockTherapy.h"
#include "UObject/NoExportTypes.h"

class ACamperPlayer;

void UShockTherapy::OnLevelReadyToPlay()
{

}

void UShockTherapy::Multicast_DetonateShockTherapy_Implementation(const TArray<ACamperPlayer*>& shockedSurvivors, float madnessToAdd)
{

}

void UShockTherapy::Multicast_ActivateShockTherapyAOE_Implementation(const FTransform& shockTherapyZoneTransform)
{

}

UShockTherapy::UShockTherapy()
{
	this->_shockTherapyConeAOEClass = NULL;
	this->_shockTherapyLineAOEClass = NULL;
	this->_shockTherapyCircleAOEClass = NULL;
	this->_shockTherapyZones = TArray<AShockTherapyAOE*>();
	this->_shockTherapyBlockAllInteractionsEffectClass = NULL;
}
