#include "HoudiniParameterRampColor.h"

UHoudiniParameterRampColor::UHoudiniParameterRampColor()
{
	this->Points = TArray<UHoudiniParameterRampColorPoint*>();
	this->bCaching = false;
	this->CachedPoints = TArray<UHoudiniParameterRampColorPoint*>();
	this->DefaultPositions = TArray<float>();
	this->DefaultValues = TArray<FLinearColor>();
	this->DefaultChoices = TArray<int32>();
	this->NumDefaultPoints = -1;
	this->ModificationEvents = TArray<UHoudiniParameterRampModificationEvent*>();
}
