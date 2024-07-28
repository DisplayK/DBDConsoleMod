#include "LoadoutMenuPopupPresenter.h"
#include "InventorySlotData.h"
#include "ELoadoutSlot.h"

class ULoadoutMenuPopupViewData;

ULoadoutMenuPopupViewData* ULoadoutMenuPopupPresenter::SetLoadoutPopupViewData(const FInventorySlotData& slotData)
{
	return NULL;
}

void ULoadoutMenuPopupPresenter::OnSelectedCharacterChanged(int32 selectedCharacterIndex)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuSlotIsSelected(const ELoadoutSlot slotSelected)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuPresetSelected(const int32 presetId)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuPresetClick(const int32 presetId)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuInventorySlotClick(const ELoadoutSlot itemIndex, const FName itemId)
{

}

ULoadoutMenuPopupPresenter::ULoadoutMenuPopupPresenter()
{
	this->_loadoutPopupSlotData = TArray<ULoadoutMenuPopupViewData*>();
	this->_loadoutPopupInventoryData = TArray<ULoadoutMenuPopupViewData*>();
}
