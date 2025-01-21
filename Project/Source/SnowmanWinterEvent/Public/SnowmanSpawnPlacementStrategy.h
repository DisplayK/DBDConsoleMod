#pragma once

#include "CoreMinimal.h"
#include "SnowmanSpawnLocationData.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ETileSpawnPointType.h"
#include "EGameplayElementType.h"
#include "SnowmanSpawnPlacementStrategy.generated.h"

class AHatch;
class APallet;

UCLASS(meta=(BlueprintSpawnableComponent))
class USnowmanSpawnPlacementStrategy : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromOtherActiveSnowmen;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromOtherPlayers;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minHatchDistance;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minPalletDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _navmesh_radiusArea;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _navmesh_minimumDistanceFromOriginSpawnPoint;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _navmesh_minimumNumberOfNavmeshPointsToBeReady;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _boxExtentXSize;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _boxExtentYSize;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _boxExtentZSize;

	UPROPERTY(EditDefaultsOnly)
	FVector _collisionBoxHalfExtent;

	UPROPERTY(EditDefaultsOnly)
	float _collisionCapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly)
	float _collisionCapsuleRadius;

	UPROPERTY(Transient)
	float _minDistanceFromOtherActiveSnowmenSquared;

	UPROPERTY(Transient)
	float _minDistanceFromOtherPlayersSquared;

	UPROPERTY(Transient)
	float _minPalletDistanceSquared;

	UPROPERTY(Transient)
	float _minHatchSquaredDistance;

	UPROPERTY(EditAnywhere)
	TArray<ETileSpawnPointType> _spawnPointsTileTypes;

	UPROPERTY(EditAnywhere)
	TArray<EGameplayElementType> _spawnPointsGameplayElementTypes;

	UPROPERTY(Transient)
	TArray<FSnowmanSpawnLocationData> _spawnLocationData;

	UPROPERTY(Transient)
	TArray<AHatch*> _hatches;

	UPROPERTY(Transient)
	TArray<APallet*> _pallets;

	UPROPERTY(Transient)
	FVector _collisionCheckBoxExtents;

	UPROPERTY(EditDefaultsOnly)
	float _downRaycastLength;

	UPROPERTY(EditAnywhere)
	float _rayCastZOffet;

	UPROPERTY(EditDefaultsOnly)
	float _distanceToGroundToleranceSquared;

private:
	UFUNCTION()
	void Authority_OnIntroCompletedOrLevelReadyToPlay();

public:
	USnowmanSpawnPlacementStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanSpawnPlacementStrategy) { return 0; }
