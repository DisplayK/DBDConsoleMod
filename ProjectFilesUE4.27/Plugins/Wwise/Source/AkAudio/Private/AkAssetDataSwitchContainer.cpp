#include "AkAssetDataSwitchContainer.h"

UAkAssetDataSwitchContainer::UAkAssetDataSwitchContainer()
{
	this->SwitchContainers = TArray<UAkAssetDataSwitchContainerData*>();
	this->DefaultGroupValue = NULL;
}
