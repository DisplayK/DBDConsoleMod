#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDAIController.h"
#include "AISkillPerk.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DBDAIBTController.generated.h"

class UDBDPathFollowingComponent;
class UDBDBehaviorTreeComponent;
class UDBDAIPerceptionComponent;
class UBehaviorTree;
class UDBDBlackboardComponent;
class UDBDAIGoalComponent;
class UAISkill;
class UDBDNavMeshExplorerComponent;
class UDBDAIStateComponent;
class AActor;

UCLASS()
class DBDBOTS_API ADBDAIBTController : public ADBDAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBehaviorTree* BehaviorTree;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Export)
	TArray<UAISkill*> BaseSkills;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Export)
	TArray<UAISkill*> RoleSkills;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FAISkillPerk> PerkSkills;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool ListenToAttackEvents;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIPerceptionComponent* _dbdPerception;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDBlackboardComponent* _dbdBlackboard;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDPathFollowingComponent* _dbdPathFollowing;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDBehaviorTreeComponent* _dbdBehaviorTree;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavMeshExplorerComponent* _navMeshExplorer;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIStateComponent* _aiState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAIGoalComponent* _aiGoal;

	UPROPERTY(Transient)
	TMap<FGameplayTag, UBehaviorTree*> _setDynamicSubtrees;

	UPROPERTY(Transient)
	TArray<UAISkill*> _aiSkills;

private:
	UFUNCTION()
	void OnPawnBump(AActor* selfActor, AActor* otherActor, FVector normalImpulse, const FHitResult& hit);

	UFUNCTION()
	void Authority_FinishedPlaying();

public:
	ADBDAIBTController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDAIBTController) { return 0; }
