#include "HoudiniParameterFile.h"

UHoudiniParameterFile::UHoudiniParameterFile()
{
	this->Values = TArray<FString>();
	this->DefaultValues = TArray<FString>();
	this->Filters = TEXT("");
	this->bIsReadOnly = false;
}
