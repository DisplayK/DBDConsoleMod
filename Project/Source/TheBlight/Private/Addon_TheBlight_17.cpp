#include "Addon_TheBlight_17.h"

class ACamperPlayer;

void UAddon_TheBlight_17::Multicast_SpawnParticleOnSurvivors_Implementation(const TArray<ACamperPlayer*>& survivors)
{

}

UAddon_TheBlight_17::UAddon_TheBlight_17()
{
	this->_survivorInRangeDistance = 1600.000000;
	this->_hinderedSeconds = 15.000000;
}
