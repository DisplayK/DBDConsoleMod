#include "HoudiniParameterButtonStrip.h"

UHoudiniParameterButtonStrip::UHoudiniParameterButtonStrip()
{
	this->Count = 0;
	this->Labels = TArray<FString>();
	this->Values = TArray<int32>();
}
