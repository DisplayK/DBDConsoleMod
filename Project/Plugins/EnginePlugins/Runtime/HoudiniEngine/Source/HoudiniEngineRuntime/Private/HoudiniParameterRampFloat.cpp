#include "HoudiniParameterRampFloat.h"

UHoudiniParameterRampFloat::UHoudiniParameterRampFloat()
{
	this->Points = TArray<UHoudiniParameterRampFloatPoint*>();
	this->CachedPoints = TArray<UHoudiniParameterRampFloatPoint*>();
	this->DefaultPositions = TArray<float>();
	this->DefaultValues = TArray<float>();
	this->DefaultChoices = TArray<int32>();
	this->NumDefaultPoints = -1;
	this->bCaching = false;
	this->ModificationEvents = TArray<UHoudiniParameterRampModificationEvent*>();
}
