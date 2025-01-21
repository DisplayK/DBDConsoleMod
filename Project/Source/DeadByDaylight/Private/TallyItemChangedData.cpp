#include "TallyItemChangedData.h"

FTallyItemChangedData::FTallyItemChangedData()
{
	this->Item = FInventorySlotData{};
	this->Addon1 = FInventorySlotData{};
	this->Addon2 = FInventorySlotData{};
	this->IsSet = false;
	this->EnergyType = EEnergyTypeEnum::EInvalid;
	this->EnergyLevel = 0.0f;
}
