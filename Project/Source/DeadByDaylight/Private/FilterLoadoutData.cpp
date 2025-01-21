#include "FilterLoadoutData.h"

FFilterLoadoutData::FFilterLoadoutData()
{
	this->ID = NAME_None;
	this->Icon = NULL;
	this->Title = FText::GetEmpty();
	this->Role = TArray<EPlayerRole>();
	this->LoadoutType = ELoadoutType::Item;
}
