#include "CoreMenuLoadoutPartWidget.h"
#include "LoadoutTooltipData.h"

class UMenuLoadoutPartViewData;

void UCoreMenuLoadoutPartWidget::SetSelectedState(bool selectedState)
{

}

void UCoreMenuLoadoutPartWidget::SetLoadoutPartTooltipData(const FLoadoutTooltipData& tooltipData)
{

}

void UCoreMenuLoadoutPartWidget::SetLoadoutPartScale(float scale)
{

}

void UCoreMenuLoadoutPartWidget::SetLoadoutPartData(const UMenuLoadoutPartViewData* data)
{

}

FName UCoreMenuLoadoutPartWidget::GetWidgetItemId()
{
	return NAME_None;
}

FLoadoutTooltipData UCoreMenuLoadoutPartWidget::GetTooltipData()
{
	return FLoadoutTooltipData{};
}

UCoreMenuLoadoutPartWidget::UCoreMenuLoadoutPartWidget()
{
	this->SlotIndex = ELoadoutSlot::SKIN;
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->RarityIMG = NULL;
	this->IconIMG = NULL;
	this->KillSwitchIMG = NULL;
	this->LockedIcon = NULL;
	this->Selected = NULL;
	this->LayoutScale = NULL;
	this->OnHoverBorder = NULL;
	this->StackCountTB = NULL;
	this->RarityTexture = NULL;
	this->_itemId = NAME_None;
}
