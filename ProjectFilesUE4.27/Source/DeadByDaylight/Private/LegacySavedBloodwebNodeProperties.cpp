#include "LegacySavedBloodwebNodeProperties.h"

FLegacySavedBloodwebNodeProperties::FLegacySavedBloodwebNodeProperties()
{
	this->ContentType = EBloodwebNodeContentType::Empty;
	this->Rarity = EItemRarity::Common;
	this->Tags = TArray<FString>();
}
