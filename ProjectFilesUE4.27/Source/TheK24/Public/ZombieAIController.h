#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIController.h"
#include "TunableStat.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Perception/AIPerceptionTypes.h"
#include "ZombieAIController.generated.h"

class ACamperPlayer;
class UBehaviorTree;
class UAIPerceptionComponent;
class AMeatHook;
class ASlasherPlayer;
class AActor;

UCLASS()
class AZombieAIController : public AAIController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	UBehaviorTree* _zombieBehaviorTree;

	UPROPERTY(EditAnywhere, Export)
	UAIPerceptionComponent* _aiPerceptionComponent;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _survivorInVision;

	UPROPERTY(Transient)
	ACamperPlayer* _chaseTargetSurvivor;

	UPROPERTY(Transient)
	FVector _goToLocation;

	UPROPERTY(Transient)
	AMeatHook* _patrolArea;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _survivorsInAttackDetector;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _cannotChaseWhileIdleTags;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieAttackHitTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieAttackOpenTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieAnimSpawnTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieAnimDyingTime;

	UPROPERTY(EditAnywhere)
	FTunableStat _zombieSightRadius;

	UPROPERTY(EditAnywhere)
	FTunableStat _zombieLoseSightRadius;

	UPROPERTY(EditAnywhere)
	FTunableStat _zombieVisionHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieFallSmashTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _zombieAttackCooldownTime;

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* slasher);

	UFUNCTION()
	void Authority_OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus);

public:
	AZombieAIController();
};

FORCEINLINE uint32 GetTypeHash(const AZombieAIController) { return 0; }
