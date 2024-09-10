#include "OnGameEventAchievement.h"
#include "EDBDScoreTypes.h"

class AActor;

void UOnGameEventAchievement::OnScoreTypeEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target)
{

}

UOnGameEventAchievement::UOnGameEventAchievement()
{
	this->_gameEvents = TArray<FGameplayTag>();
	this->_scoreTypes = TArray<EDBDScoreTypes>();
}
