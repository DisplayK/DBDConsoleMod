#include "BaseItemData.h"

FBaseItemData::FBaseItemData()
{
	this->Type = EInventoryItemType::None;
	this->UIData = FItemUIData{};
	this->GenericDisplayName = FText::GetEmpty();
	this->ItemBlueprint = NULL;
	this->AssetData = NULL;
	this->ItemId = TEXT("");
}
