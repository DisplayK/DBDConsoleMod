#include "ItemAddonProperties.h"

FItemAddonProperties::FItemAddonProperties()
{
	this->ItemAddonBlueprint = NULL;
	this->ParentItem = FParentItemIDs{};
	this->PreLevelGenerationModifierID = TArray<FName>();
}
