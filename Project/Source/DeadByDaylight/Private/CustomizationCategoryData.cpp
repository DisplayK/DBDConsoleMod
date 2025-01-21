#include "CustomizationCategoryData.h"

FCustomizationCategoryData::FCustomizationCategoryData()
{
	this->ID = NAME_None;
	this->Category = ECustomizationCategory::None;
	this->IconPath = TEXT("");
	this->DisplayName = FText::GetEmpty();
	this->Role = EPlayerRole::VE_None;
}
