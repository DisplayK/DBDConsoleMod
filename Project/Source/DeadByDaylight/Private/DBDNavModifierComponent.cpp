#include "DBDNavModifierComponent.h"

UDBDNavModifierComponent::UDBDNavModifierComponent()
{
	this->ForceUseFailsafeExtent = true;
	this->UpdateModifierInterval = 0.250000;
	this->StartNavigationRelevant = true;
	this->AlwaysTickToCheckTransform = true;
	this->RelevantPassiveMode = false;
}
