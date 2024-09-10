#include "Accessory.h"

class UActorComponent;

void UAccessory::BP_DestroyComponent(UActorComponent* componentToDestroy)
{

}

UAccessory::UAccessory()
{
	this->_shouldLoadOnServer = false;
}
