#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "ETrailType.h"
#include "TormentTrailSpawnerComponent.generated.h"

class ATormentTrailController;
class UTormentTrailPointCollectionComponent;
class UAuthoritativeActorPoolComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEEXECUTIONER_API UTormentTrailSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ATormentTrailController* _currentTrailController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _restrictionRangeToHooks;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _restrictionRangeToGenerators;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _restrictionRangeToExitSwitch;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _maxSlopeAngleForTrail;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minSlopeAngleForTrail;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _restrictionRangeToHatch;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _restrictionMaxVerticalDistance;

	UPROPERTY(Transient, Export)
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent;

	UPROPERTY(Transient, Export)
	UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent;

	UPROPERTY(Transient, Export)
	UAuthoritativeActorPoolComponent* _tormentTrailControllerPool;

	UPROPERTY(Transient, Export)
	UAuthoritativeActorPoolComponent* _tormentRestrictedTrailControllerPool;

	UPROPERTY()
	TArray<AActor*> _actorsInRange;

	UPROPERTY(EditDefaultsOnly)
	FVector _slopeDetectionOverGroundVector;

	UPROPERTY(EditDefaultsOnly)
	FVector _slopeDetectionEndVector;

	UPROPERTY(EditDefaultsOnly)
	float _forwardMultiplierSlopeDetection;

	UPROPERTY(EditDefaultsOnly)
	float _epsilonToAddToSpawnLocationInZ;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Sever_SpawnTrailController(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation);

	UFUNCTION(Server, Reliable)
	void Server_StopTrailController(ATormentTrailController* trailController);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestMoreActorInPool(const ETrailType trailType);

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnInRangeChanged(const bool inRange, const AActor* actor);

public:
	UTormentTrailSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTormentTrailSpawnerComponent) { return 0; }
