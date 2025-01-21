#include "ArchiveNodeTooltipWidget.h"
#include "ArchiveNodeViewData.h"

void UArchiveNodeTooltipWidget::SetTooltipData(const FArchiveNodeViewData& nodeViewData)
{

}

void UArchiveNodeTooltipWidget::Reset()
{

}

UArchiveNodeTooltipWidget::UArchiveNodeTooltipWidget()
{
	this->BackgroundIMG = NULL;
	this->RarityIMG = NULL;
	this->NodeTitleTB = NULL;
	this->SubtitleTB = NULL;
	this->NodeDescriptionRTB = NULL;
	this->ObjectiveWidgetClass = NULL;
	this->ArchiveObjectivesContainer = NULL;
	this->ProgressionRewardWidget = NULL;
	this->CurrencyRewardWidget = NULL;
	this->VignetteRTB = NULL;
}
