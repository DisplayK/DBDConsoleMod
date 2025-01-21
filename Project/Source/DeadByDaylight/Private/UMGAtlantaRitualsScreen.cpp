#include "UMGAtlantaRitualsScreen.h"

void UUMGAtlantaRitualsScreen::BroadcastOnClaimRewardButtonPressed(const int32 ritualId)
{

}

void UUMGAtlantaRitualsScreen::BroadcastOnBackButtonPressed()
{

}

UUMGAtlantaRitualsScreen::UUMGAtlantaRitualsScreen()
{
	this->DailyTab = NULL;
	this->WeeklyTab = NULL;
	this->_atlantaRitualTitle = FText::GetEmpty();
	this->_endInLabel = FText::GetEmpty();
	this->_dailyButtonLabel = FText::GetEmpty();
	this->_weeklyButtonLabel = FText::GetEmpty();
	this->_dailyRemainingTime = FText::GetEmpty();
	this->_weeklyRemainingTime = FText::GetEmpty();
}
