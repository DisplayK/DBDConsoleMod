#include "S32P01.h"
#include "Net/UnrealNetwork.h"

void US32P01::OnRep_IsKillerInRange()
{

}

float US32P01::GetGeneratorRevealRange() const
{
	return 0.0f;
}

void US32P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US32P01, _isKillerInRange);
}

US32P01::US32P01()
{
	this->_generatorRevealRange = 1400.000000;
	this->_revealEffect = NULL;
	this->_revealStatus = NULL;
	this->_isKillerInRange = true;
}
