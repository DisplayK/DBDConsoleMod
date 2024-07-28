#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBasementType.h"
#include "UObject/NoExportTypes.h"
#include "EPathType.h"
#include "EscapeStrategyType.h"
#include "EQuadrantSpawnType.h"
#include "ETileType.h"
#include "EDensity.h"
#include "Tile.generated.h"

class UTileSpawnPoint;
class UActorSpawner;
class UObjectRandomizer;
class UActorVariationSpawner;

UCLASS()
class DEADBYDAYLIGHT_API ATile : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool RerunConstructionScript;

	UPROPERTY(EditAnywhere)
	int32 MinimumSpacing;

	UPROPERTY(EditAnywhere)
	int32 MaximumSpacing;

	UPROPERTY(EditAnywhere)
	bool DiagonalSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool TypeSpacing;

	UPROPERTY(EditAnywhere)
	int32 MaximumCount;

	UPROPERTY(EditAnywhere)
	FVector2D Dimension;

	UPROPERTY(EditAnywhere)
	TArray<EscapeStrategyType> AvailableEscapeTypes;

	UPROPERTY(EditAnywhere)
	ETileType Type;

	UPROPERTY(EditAnywhere)
	EDensity Density;

	UPROPERTY(EditAnywhere)
	EPathType Path;

	UPROPERTY(EditAnywhere)
	int32 Number;

	UPROPERTY(EditAnywhere)
	bool PlaceHolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnPriorityTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere)
	FVector2D Coord;

	UPROPERTY(EditAnywhere)
	EQuadrantSpawnType QuadrantSpawnType;

	UPROPERTY(EditAnywhere)
	EBasementType BasementType;

	UPROPERTY(Transient, Export)
	TArray<UTileSpawnPoint*> SpawnPointsCache;

	UPROPERTY(Transient, Export)
	TArray<UObjectRandomizer*> ObjectRandomizersCache;

	UPROPERTY(Transient, Export)
	TArray<UActorSpawner*> ActorSpawnersCache;

	UPROPERTY(Transient, Export)
	TArray<UActorVariationSpawner*> ActorVariationSpawnersCache;

	UPROPERTY(BlueprintReadOnly)
	FRandomStream SharedTileRandomizer;

protected:
	UPROPERTY(ReplicatedUsing=OnRep_Initialized, Transient)
	bool _initialized;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSetSpawnObject(UTileSpawnPoint* tileSpawnPoint, AActor* spawnedObject);

protected:
	UFUNCTION()
	void OnRep_Initialized(bool oldValue);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnAllTileSpawned();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void InitOnSpawned();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATile();
};

FORCEINLINE uint32 GetTypeHash(const ATile) { return 0; }
