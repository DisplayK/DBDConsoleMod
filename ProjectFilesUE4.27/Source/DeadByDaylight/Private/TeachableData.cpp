#include "TeachableData.h"

FTeachableData::FTeachableData()
{
	this->InventorySlotData = FInventorySlotData{};
	this->Status = ETeachableStatus::Unknown;
	this->UnlockLevel = 0;
	this->Message = TEXT("");
}
