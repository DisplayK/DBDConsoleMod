#include "ConsentDefinitionData.h"

FConsentDefinitionData::FConsentDefinitionData()
{
	this->Id = TEXT("");
	this->Platform = TArray<FString>();
	this->Sku = TArray<FString>();
	this->Sku_IsSet = false;
	this->Language = TArray<FString>();
	this->NeedAcceptance = false;
}
