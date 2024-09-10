#include "BloodwebNodeProperties.h"

FBloodwebNodeProperties::FBloodwebNodeProperties()
{
	this->ContentType = EBloodwebNodeContentType::Empty;
	this->Rarity = EItemRarity::Common;
	this->Tags = TArray<FString>();
	this->CharacterId = 0;
}
