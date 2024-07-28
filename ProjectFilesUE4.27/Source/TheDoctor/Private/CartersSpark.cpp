#include "CartersSpark.h"
#include "CartersSparkComponent.h"

class ACamperPlayer;

void ACartersSpark::CancelSurvivorInteraction(ACamperPlayer* survivor)
{

}

void ACartersSpark::Authority_StartShockAttackComboTimer(ACamperPlayer* shockedSurvivor)
{

}

ACartersSpark::ACartersSpark()
{
	this->_survivorCartersSparkComponentClass = NULL;
	this->_doctorBlockInterruptEffect = NULL;
	this->_madnessStatusEffect = NULL;
	this->_illusionaryDoctorEffect = NULL;
	this->_cartersSparkComponent = CreateDefaultSubobject<UCartersSparkComponent>(TEXT("CartersSparkComponent"));
}
