#include "BloodWebPersistentData.h"

FBloodWebPersistentData::FBloodWebPersistentData()
{
	this->VersionNumber = 0;
	this->Level = 0;
	this->RingData = TArray<FBloodWebRingPersistentData>();
	this->Paths = TArray<FName>();
	this->EntityCurrentNode = TEXT("");
	this->GenerationDate = FDateTime{};
}
