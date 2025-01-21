#include "TriggerableActivatorComponent.h"

void UTriggerableActivatorComponent::Authority_OnLevelReadyToPlay()
{

}

UTriggerableActivatorComponent::UTriggerableActivatorComponent()
{
	this->_triggerableClass = NULL;
	this->_triggerables = TArray<UTriggerableWorldObjectComponent*>();
}
