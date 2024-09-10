#include "PhantomTrap.h"
#include "TerrorRadiusEmitterComponent.h"

class ASlasherPlayer;
class ACamperPlayer;

void APhantomTrap::OnFlashlightLitChanged(bool isLit)
{

}

bool APhantomTrap::IsTrapSet_Implementation() const
{
	return false;
}

void APhantomTrap::InitializeTerrorRadiusEmitter(ASlasherPlayer* OwningSlasher)
{

}

bool APhantomTrap::CanActivateTrap(ACamperPlayer* camper, bool isInUse)
{
	return false;
}

APhantomTrap::APhantomTrap()
{
	this->_terrorRadiusEmitter = CreateDefaultSubobject<UTerrorRadiusEmitterComponent>(TEXT("Terror Radius Component"));
	this->_isHighlighted = false;
	this->_camperOutlineDuration = 5.000000;
	this->_lineOfSightTraceMinInterval = 0.100000;
	this->_speedTolerance = 900.000000;
	this->_trapLocation = NULL;
	this->_triggerZone = NULL;
}
