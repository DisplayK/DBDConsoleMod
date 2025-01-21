#include "ItemViewData.h"

FItemViewData::FItemViewData()
{
	this->IsEnergyTypeValid = false;
	this->EnergyLevel = 0.0f;
	this->Count = 0;
	this->InputKey = FKey{};
	this->ShowKeyPrompt = false;
	this->IsLimitedItem = false;
	this->IsAvailable = false;
}
