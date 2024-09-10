#include "HoudiniParameterChoice.h"

UHoudiniParameterChoice::UHoudiniParameterChoice()
{
	this->IntValue = -1;
	this->DefaultIntValue = 0;
	this->StringValue = TEXT("");
	this->DefaultStringValue = TEXT("");
	this->StringChoiceValues = TArray<FString>();
	this->StringChoiceLabels = TArray<FString>();
	this->bIsChildOfRamp = false;
	this->IntValuesArray = TArray<int32>();
}
