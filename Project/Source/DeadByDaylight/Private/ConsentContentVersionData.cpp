#include "ConsentContentVersionData.h"

FConsentContentVersionData::FConsentContentVersionData()
{
	this->Label = TEXT("");
	this->EntryDate = 0;
	this->Title = TMap<FString, FString>();
	this->Content = TMap<FString, FString>();
}
