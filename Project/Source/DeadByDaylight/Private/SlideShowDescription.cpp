#include "SlideShowDescription.h"

FSlideShowDescription::FSlideShowDescription()
{
	this->Id = NAME_None;
	this->Overview = FText::GetEmpty();
	this->Playstyle = FText::GetEmpty();
	this->ImageFilePath = TEXT("");
	this->PerkCategory = TArray<EPerkCategory>();
}
