#pragma once

#include "CoreMinimal.h"
#include "ETileSpawnPointType.h"
#include "GameFramework/Actor.h"
#include "GeneratedLevelData.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "GenerationParams.h"
#include "ProceduralLevelBuilder.generated.h"

class UDBDDesignTunables;
class UEdgeObjectHandlingStrategy;
class UObjectLibrary;
class UTileBank;
class ATile;
class UPaperTileMap;
class UTileMatrix;
class ADBDClientSyncer;
class UProceduralGenerationData;
class UMapData;
class UActorSpawner;
class AProceduralLevelData;
class UBlackboardComponent;

UCLASS()
class DEADBYDAYLIGHT_API AProceduralLevelBuilder : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString PathToMapDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString PathToTilesDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float KillerMinProximityFromCamper;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SurvivorMinProximityFromOtherCamper;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinProximityBetweenGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinProximityBetweenChests;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinProximityBetweenTotems;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SurvivorMinProximityFromGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SurvivorMinProximityFromTotem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SurvivorMaxLineOfSightFromTotem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinProximityBetweenSpecialBehaviourItems;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SpecialBehaviourItemMinProximityFromSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SpecialBehaviourItemMinProximityFromKiller;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UPaperTileMap> DebugMap;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TSubclassOf<ATile>> DebugTiles;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SmallMeatLockerMinProximityFromKillerLair;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FactorToAdjustToWhenOutOfProximity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FactorToAdjustToWhenInLineOfSight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HeightAmplifier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float HeightAmplifierActivationHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	UProceduralGenerationData* ProceduralGenerationData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float TileWeightRateOfDecay;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float QuadTileWeightRateOfDecay;

private:
	UPROPERTY()
	UClass* _tileClass;

	UPROPERTY()
	UMapData* _mapData;

	UPROPERTY()
	UObjectLibrary* _availableTilesLibrary;

	UPROPERTY()
	UObjectLibrary* _availableDerivedTileLibrary;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDBDDesignTunables> DesignTunableClass;

	UPROPERTY(Transient)
	UDBDDesignTunables* _designTunables;

	UPROPERTY()
	FGeneratedLevelData _generatedData;

	UPROPERTY(Transient)
	UTileMatrix* _tileMatrix;

	UPROPERTY(Transient)
	UTileBank* _tileBank;

	UPROPERTY(Transient, Export)
	UActorSpawner* _killerLairSpawner;

	UPROPERTY(Transient)
	TArray<FSoftObjectPath> _preloadAssetReferences;

	UPROPERTY(Transient)
	TArray<TSubclassOf<AActor>> _chestItemAssetReferences;

	UPROPERTY(Transient)
	UClass* _slasherPawn;

	UPROPERTY(Transient)
	TArray<ATile*> _tilesThatHaveBeenSpawned;

	UPROPERTY(Transient)
	AProceduralLevelData* _debugProceduralDatas;

	UPROPERTY(Replicated, Transient)
	ADBDClientSyncer* _syncer;

	UPROPERTY(Transient, Export)
	UBlackboardComponent* _blackboardComp;

	UPROPERTY(Transient)
	UEdgeObjectHandlingStrategy* _edgeObjectHandlingStrategy;

	UPROPERTY(Transient)
	ATile* _backupKillerLairTile;

private:
	UFUNCTION()
	void SyncSeeds();

	UFUNCTION()
	void StartGenerationOnSyncerReady();

public:
	UFUNCTION(BlueprintCallable)
	AActor* SpawnActor(UClass* actorClass, ETileSpawnPointType spawnPointType);

	UFUNCTION(BlueprintImplementableEvent)
	void RemoveMist();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DebugShareGenerationData(FGenerationParams usedParams);

	UFUNCTION()
	void BuildFromSeed();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void ApplyMist(float modifier);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AProceduralLevelBuilder();
};

FORCEINLINE uint32 GetTypeHash(const AProceduralLevelBuilder) { return 0; }
