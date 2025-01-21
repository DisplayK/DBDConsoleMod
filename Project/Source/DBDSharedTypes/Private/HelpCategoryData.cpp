#include "HelpCategoryData.h"

FHelpCategoryData::FHelpCategoryData()
{
	this->Type = EHelpType::General;
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->TopicIds = TArray<FName>();
}
