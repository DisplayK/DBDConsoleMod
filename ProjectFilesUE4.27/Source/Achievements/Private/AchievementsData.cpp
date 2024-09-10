#include "AchievementsData.h"

UAchievementsData::UAchievementsData()
{
	this->gameEventSimpleAchievements = TArray<FGameEventSimpleAchievementInfo>();
	this->scoreEventSimpleAchievements = TArray<FScoreEventSimpleAchievementInfo>();
	this->gameEventClassAchievements = TArray<FGameEventClassAchievementInfo>();
	this->customEventClassAchievements = TArray<FCustomAchievementInfo>();
}
