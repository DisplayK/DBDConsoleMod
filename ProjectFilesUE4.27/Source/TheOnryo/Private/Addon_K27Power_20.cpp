#include "Addon_K27Power_20.h"

void UAddon_K27Power_20::Client_OnAddonTriggered_Implementation(const bool televisionsWerePowered)
{

}

UAddon_K27Power_20::UAddon_K27Power_20()
{
	this->_lastTurnedOffTelevisionsByOnryo = TArray<AOnryoTelevision*>();
	this->_numberOfTVsToTurnOn = 4;
}
