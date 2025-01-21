#include "HoudiniParameterFloat.h"

UHoudiniParameterFloat::UHoudiniParameterFloat()
{
	this->Values = TArray<float>();
	this->DefaultValues = TArray<float>();
	this->Unit = TEXT("");
	this->bNoSwap = false;
	this->bHasMin = false;
	this->bHasMax = false;
	this->bHasUIMin = false;
	this->bHasUIMax = false;
	this->bIsLogarithmic = false;
	this->Min = -340282346638528859811704183484516925440.000000;
	this->Max = 340282346638528859811704183484516925440.000000;
	this->UIMin = -340282346638528859811704183484516925440.000000;
	this->UIMax = 340282346638528859811704183484516925440.000000;
	this->bIsChildOfRamp = false;
}
