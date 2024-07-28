#include "CoreArchiveCompendiumButtonWidget.h"
#include "CompendiumButtonData.h"

void UCoreArchiveCompendiumButtonWidget::SetButtonData(const FCompendiumButtonData& buttonData)
{

}

void UCoreArchiveCompendiumButtonWidget::OnButtonUnhovered()
{

}

void UCoreArchiveCompendiumButtonWidget::OnButtonHovered()
{

}

FString UCoreArchiveCompendiumButtonWidget::GetTomeId()
{
	return TEXT("");
}

UCoreArchiveCompendiumButtonWidget::UCoreArchiveCompendiumButtonWidget()
{
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->TomeProgressStyleTexture = NULL;
	this->VolumeIndex = NULL;
}
