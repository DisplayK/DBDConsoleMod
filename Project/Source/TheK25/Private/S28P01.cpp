#include "S28P01.h"
#include "Net/UnrealNetwork.h"

void US28P01::OnRep_S28P01ChargeableComponent()
{

}

void US28P01::OnRep_IsPerkActive()
{

}

void US28P01::OnRep_IsInteractionOngoing()
{

}

float US28P01::GetAuraRevealRange() const
{
	return 0.0f;
}

float US28P01::GetAuraRevealDuration() const
{
	return 0.0f;
}

void US28P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US28P01, _S28P01ChargeableComponent);
	DOREPLIFETIME(US28P01, _isPerkActive);
	DOREPLIFETIME(US28P01, _isInteractionOngoing);
}

US28P01::US28P01()
{
	this->_auraRevealDuration = 0.000000;
	this->_auraRevealRange = 0.000000;
	this->_S28P01ChargeableComponent = NULL;
	this->_isPerkActive = false;
	this->_isInteractionOngoing = false;
	this->_playerOwner = NULL;
}
