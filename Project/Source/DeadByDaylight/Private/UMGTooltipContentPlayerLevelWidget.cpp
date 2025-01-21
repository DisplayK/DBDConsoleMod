#include "UMGTooltipContentPlayerLevelWidget.h"

void UUMGTooltipContentPlayerLevelWidget::SetInfo(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience)
{

}

UUMGTooltipContentPlayerLevelWidget::UUMGTooltipContentPlayerLevelWidget()
{
	this->PlayerLevelText = FText::GetEmpty();
	this->LevelBanner = NULL;
	this->LevelExperienceRichText = NULL;
	this->ExperienceToNextLevelText = NULL;
}
