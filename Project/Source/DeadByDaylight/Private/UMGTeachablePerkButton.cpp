#include "UMGTeachablePerkButton.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"

void UUMGTeachablePerkButton::HandleTooltipLongPressedEvent(const FInventorySlotData& itemData, FVector2D position)
{

}

UUMGTeachablePerkButton::UUMGTeachablePerkButton()
{
	this->TeachablePerkButton = NULL;
	this->LockedStatusIcon = NULL;
}
