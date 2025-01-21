#include "GuardController.h"
#include "UObject/NoExportTypes.h"
#include "Perception/AIPerceptionTypes.h"

class AActor;

void AGuardController::OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus)
{

}

void AGuardController::OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise)
{

}

AGuardController::AGuardController()
{
	this->_cannotHuntWhileIdleTags = TArray<FGameplayTag>();
	this->_isPatrollingKey = TEXT("IsPatrolling");
	this->_patrolDestinationKey = TEXT("PatrolTargetLocation");
	this->_patrolUseDirectPathKey = TEXT("PatrolUseDirectPath");
	this->_isHuntingKey = TEXT("IsHunting");
	this->_huntedSurvivorKey = TEXT("HuntedSurvivor");
	this->_huntDestinationKey = TEXT("HuntTargetLocation");
	this->_huntUseDirectPathKey = TEXT("HuntUseDirectPath");
	this->_huntShouldSearchLockerKey = TEXT("HuntShouldSearchLocker");
}
