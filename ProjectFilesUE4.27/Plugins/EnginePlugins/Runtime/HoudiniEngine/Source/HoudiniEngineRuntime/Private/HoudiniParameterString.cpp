#include "HoudiniParameterString.h"

UHoudiniParameterString::UHoudiniParameterString()
{
	this->Values = TArray<FString>();
	this->DefaultValues = TArray<FString>();
	this->ChosenAssets = TArray<UObject*>();
	this->bIsAssetRef = false;
}
