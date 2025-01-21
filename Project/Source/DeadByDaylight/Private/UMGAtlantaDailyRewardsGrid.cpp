#include "UMGAtlantaDailyRewardsGrid.h"

void UUMGAtlantaDailyRewardsGrid::StartRewardsIntroRewardSequence()
{

}

void UUMGAtlantaDailyRewardsGrid::StartIntroSequence()
{

}

void UUMGAtlantaDailyRewardsGrid::PlayNextRewardIntroAnimation()
{

}

UUMGAtlantaDailyRewardsGrid::UUMGAtlantaDailyRewardsGrid()
{
	this->BigDailyRewardWidgetTemplate_type_7 = NULL;
	this->BigDailyRewardWidgetTemplate_type_9 = NULL;
	this->BigDailyRewardWidgetTemplate_type_13 = NULL;
	this->SmallDailyRewardWidgetTemplate_type_7 = NULL;
	this->SmallDailyRewardWidgetTemplate_type_9 = NULL;
	this->SmallDailyRewardWidgetTemplate_type_13 = NULL;
	this->DailyRewardWidgetsGridPanel = NULL;
	this->LastDailyRewardWidgetPanel = NULL;
	this->NumberOfItems = 0;
	this->_bigWidgetTemplate = NULL;
	this->_smallWidgetTemplate = NULL;
	this->_rewardWidgets = TArray<UUMGDailyRewardWidget*>();
	this->_widgetToAttach = NULL;
}
