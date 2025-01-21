#include "NewsContentDetails.h"

FNewsContentDetails::FNewsContentDetails()
{
	this->Weight = 0;
	this->Version = TEXT("");
	this->Title = TEXT("");
	this->Description = TEXT("");
	this->ImagePath = TEXT("");
	this->ImagePath_IsSet = false;
	this->DwnImagePath = TEXT("");
	this->DwnImagePath_IsSet = false;
	this->ImageHeight = 0;
	this->ImageHeight_IsSet = false;
	this->IsHidden = false;
	this->IsHidden_IsSet = false;
	this->Type = 0;
	this->Type_IsSet = false;
	this->ContentTags = TArray<FString>();
	this->StartDate = TEXT("");
}
