#include "ConsentContentData.h"

FConsentContentData::FConsentContentData()
{
	this->Id = TEXT("");
	this->Versions = TArray<FConsentContentVersionData>();
}
