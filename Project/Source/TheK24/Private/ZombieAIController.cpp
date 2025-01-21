#include "ZombieAIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AIPerceptionComponent.h"

class ASlasherPlayer;
class AActor;

void AZombieAIController::OnSlasherSet(ASlasherPlayer* slasher)
{

}

void AZombieAIController::Authority_OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus)
{

}

AZombieAIController::AZombieAIController()
{
	this->_zombieBehaviorTree = NULL;
	this->_aiPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AiPerceptionComponent"));
	this->_survivorInVision = TArray<ACamperPlayer*>();
	this->_chaseTargetSurvivor = NULL;
	this->_patrolArea = NULL;
	this->_survivorsInAttackDetector = TArray<ACamperPlayer*>();
	this->_cannotChaseWhileIdleTags = TArray<FGameplayTag>();
}
