#include "DBDAIBTController.h"
#include "UObject/NoExportTypes.h"
#include "DBDAIGoalComponent.h"
#include "Engine/EngineTypes.h"
#include "DBDBlackboardComponent.h"
#include "DBDNavMeshExplorerComponent.h"
#include "DBDAIPerceptionComponent.h"
#include "DBDBehaviorTreeComponent.h"
#include "DBDPathFollowingComponent.h"
#include "DBDAIStateComponent.h"

class AActor;

void ADBDAIBTController::OnPawnBump(AActor* selfActor, AActor* otherActor, FVector normalImpulse, const FHitResult& hit)
{

}

void ADBDAIBTController::Authority_FinishedPlaying()
{

}

ADBDAIBTController::ADBDAIBTController()
{
	this->BehaviorTree = NULL;
	this->BaseSkills = TArray<UAISkill*>();
	this->RoleSkills = TArray<UAISkill*>();
	this->PerkSkills = TArray<FAISkillPerk>();
	this->ListenToAttackEvents = false;
	this->_dbdPerception = CreateDefaultSubobject<UDBDAIPerceptionComponent>(TEXT("DBDAIPerceptionComponent"));
	this->_dbdBlackboard = CreateDefaultSubobject<UDBDBlackboardComponent>(TEXT("DBDBlackboadComponent"));
	this->_dbdPathFollowing = CreateDefaultSubobject<UDBDPathFollowingComponent>(TEXT("PathFollowingComponent_FIXED"));
	this->_dbdBehaviorTree = CreateDefaultSubobject<UDBDBehaviorTreeComponent>(TEXT("DBDBehaviorTreeComponent"));
	this->_navMeshExplorer = CreateDefaultSubobject<UDBDNavMeshExplorerComponent>(TEXT("DBDNavMeshExplorerComponent"));
	this->_aiState = CreateDefaultSubobject<UDBDAIStateComponent>(TEXT("AIStateComponent"));
	this->_aiGoal = CreateDefaultSubobject<UDBDAIGoalComponent>(TEXT("AIGoalComponent"));
	this->_setDynamicSubtrees = TMap<FGameplayTag, UBehaviorTree*>();
	this->_aiSkills = TArray<UAISkill*>();
}
