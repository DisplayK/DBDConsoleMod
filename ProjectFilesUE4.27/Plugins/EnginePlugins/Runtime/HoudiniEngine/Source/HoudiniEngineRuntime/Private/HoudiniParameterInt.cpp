#include "HoudiniParameterInt.h"

UHoudiniParameterInt::UHoudiniParameterInt()
{
	this->Values = TArray<int32>();
	this->DefaultValues = TArray<int32>();
	this->Unit = TEXT("");
	this->bHasMin = false;
	this->bHasMax = false;
	this->bHasUIMin = false;
	this->bHasUIMax = false;
	this->bIsLogarithmic = false;
	this->Min = 0;
	this->Max = 0;
	this->UIMin = 0;
	this->UIMax = 0;
}
