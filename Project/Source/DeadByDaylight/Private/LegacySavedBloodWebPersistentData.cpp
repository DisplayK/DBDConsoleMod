#include "LegacySavedBloodWebPersistentData.h"

FLegacySavedBloodWebPersistentData::FLegacySavedBloodWebPersistentData()
{
	this->VersionNumber = 0;
	this->Level = 0;
	this->RingData = TArray<FLegacySavedBloodWebRingPersistentData>();
	this->Paths = TArray<FName>();
	this->EntityCurrentNode = TEXT("");
	this->GenerationDate = FDateTime{};
}
