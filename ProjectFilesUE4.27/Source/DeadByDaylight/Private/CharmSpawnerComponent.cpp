#include "CharmSpawnerComponent.h"
#include "CharmIdSlot.h"

void UCharmSpawnerComponent::ReplaceCharmTextures(const TArray<FCharmIdSlot>& customization)
{

}

UCharmSpawnerComponent::UCharmSpawnerComponent()
{
	this->SocketRootName = NAME_None;
	this->CharmSlots = TArray<FCharmSlot>();
	this->_forcedLOD = 0;
}
