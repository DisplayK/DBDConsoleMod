#include "TheMettleOfMan.h"
#include "Net/UnrealNetwork.h"

void UTheMettleOfMan::OnRep_NumTokenSoFar()
{

}

void UTheMettleOfMan::OnRep_CurrentPhase()
{

}

void UTheMettleOfMan::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTheMettleOfMan, _numTokenSoFar);
	DOREPLIFETIME(UTheMettleOfMan, _currentPhase);
}

UTheMettleOfMan::UTheMettleOfMan()
{
	this->_tokenNeededToActivate = 0;
	this->_revealOutsideRange = 0.000000;
	this->_mustBeInjured = false;
	this->_enduranceHighlightEffectClass = NULL;
	this->_numTokenSoFar = 0;
	this->_currentPhase = ETheMettleOfManPhase::Uninitialized;
	this->_revealToKillerEffect = NULL;
}
