#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETileSpawnPointType.h"
#include "LamentConfigurationSpawnInfo.h"
#include "LamentConfigurationSpawnStrategy.generated.h"

class AHatch;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULamentConfigurationSpawnStrategy : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _killerPointDistanceMultiplier;

	UPROPERTY(EditAnywhere)
	float _survivorPointDistanceMultiplier;

	UPROPERTY(EditAnywhere)
	float _maxDistancePointAllowed;

	UPROPERTY(EditAnywhere)
	float _minSurvivorDistance;

	UPROPERTY(EditAnywhere)
	float _minSurvivorDistancePointPenalty;

	UPROPERTY(EditAnywhere)
	float _minKillerDistance;

	UPROPERTY(EditAnywhere)
	float _minHatchDistance;

	UPROPERTY(EditAnywhere)
	float _minDistanceFromOtherSpawns;

	UPROPERTY(EditAnywhere)
	float _minKillerDistancePointPenalty;

	UPROPERTY(EditAnywhere)
	int32 _numberOfSpawnPointInLottery;

	UPROPERTY(EditAnywhere)
	float _pointPenaltyPerUsedLocationTime;

	UPROPERTY(EditAnywhere)
	TArray<ETileSpawnPointType> _spawnPointsTypes;

	UPROPERTY(EditDefaultsOnly)
	float _downRaycastLength;

	UPROPERTY(EditAnywhere)
	float _rayCastZOffet;

	UPROPERTY(EditAnywhere)
	float _navmeshCheckRadius;

private:
	UPROPERTY(Replicated, Transient)
	TArray<FLamentConfigurationSpawnInfo> _cached_spawnsInfo;

	UPROPERTY(Transient)
	TArray<AHatch*> _hatches;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULamentConfigurationSpawnStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationSpawnStrategy) { return 0; }
