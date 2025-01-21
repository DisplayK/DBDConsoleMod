#include "LoadoutTooltipWidget.h"
#include "LoadoutTooltipData.h"

void ULoadoutTooltipWidget::SetTooltipData(const FLoadoutTooltipData& tooltipViewData)
{

}

void ULoadoutTooltipWidget::Reset()
{

}

ULoadoutTooltipWidget::ULoadoutTooltipWidget()
{
	this->TooltipTitle = NULL;
	this->ToolTipDescriptionRTB = NULL;
	this->SpecialEventTitle = NULL;
	this->SpecialEventDescription = NULL;
	this->UnlockInstructionText = NULL;
}
