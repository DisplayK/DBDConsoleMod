#include "PerkProperties.h"

FPerkProperties::FPerkProperties()
{
	this->Tags = TArray<FName>();
	this->Effects = TArray<FOfferingEffect>();
	this->AssociatedPlayerIndex = 0;
	this->MandatoryOnBloodweblevel = 0;
	this->TeachableOnBloodweblevel = 0;
	this->AtlantaTeachableLevel = 0;
	this->PerkCategory = TArray<EPerkCategory>();
	this->PerkBlueprint = NULL;
	this->PerkLevelRarity = TArray<EItemRarity>();
	this->PerkLevelTunables = TArray<FPerkLevelText>();
	this->PerkLevel1Description = FText::GetEmpty();
	this->PerkLevel2Description = FText::GetEmpty();
	this->PerkLevel3Description = FText::GetEmpty();
	this->AtlantaActivatableInteractionIDs = TArray<FString>();
	this->AtlantaLowPriority = false;
}
