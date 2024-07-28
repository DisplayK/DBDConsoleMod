#include "DBDEmblemDefinition.h"

FDBDEmblemDefinition::FDBDEmblemDefinition()
{
	this->ID = NAME_None;
	this->Name = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Roles = TArray<EPlayerRole>();
	this->CustomEmblem = NULL;
	this->IconFilePaths = TArray<FString>();
	this->EmblemEvaluation = EEmblemEvaluation::Authority;
	this->Enabled = false;
	this->EmblemProgressionData = TArray<FEmblemProgressionID>();
}
