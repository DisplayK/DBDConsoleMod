#include "OutfitData.h"

FOutfitData::FOutfitData()
{
	this->ID = NAME_None;
	this->UIData = FItemUIData{};
	this->Availability = FItemAvailability{};
	this->OutfitItems = TArray<FName>();
	this->CollectionName = FText::GetEmpty();
	this->CollectionDescription = FText::GetEmpty();
	this->InclusionVersion = TEXT("");
	this->IsAvailableInAtlantaBuild = false;
	this->CustomizedAudioStateCollection = NAME_None;
}
