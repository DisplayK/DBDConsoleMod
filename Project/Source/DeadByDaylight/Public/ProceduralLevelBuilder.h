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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PathToMapDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PathToTilesDirectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillerMinProximityFromCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMinProximityFromOtherCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenChests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenTotems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMinProximityFromGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMinProximityFromTotem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorMaxLineOfSightFromTotem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenSpecialBehaviourItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpecialBehaviourItemMinProximityFromSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpecialBehaviourItemMinProximityFromKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UPaperTileMap> DebugMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<ATile>> DebugTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SmallMeatLockerMinProximityFromKillerLair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FactorToAdjustToWhenOutOfProximity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FactorToAdjustToWhenInLineOfSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightAmplifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightAmplifierActivationHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UProceduralGenerationData* ProceduralGenerationData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TileWeightRateOfDecay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QuadTileWeightRateOfDecay;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UClass* _tileClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMapData* _mapData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UObjectLibrary* _availableTilesLibrary;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UObjectLibrary* _availableDerivedTileLibrary;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDBDDesignTunables> DesignTunableClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	UDBDDesignTunables* _designTunables;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGeneratedLevelData _generatedData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	UTileMatrix* _tileMatrix;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	UTileBank* _tileBank;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Export)
	UActorSpawner* _killerLairSpawner;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	TArray<FSoftObjectPath> _preloadAssetReferences;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	TArray<TSubclassOf<AActor>> _chestItemAssetReferences;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	UClass* _slasherPawn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	TArray<ATile*> _tilesThatHaveBeenSpawned;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	AProceduralLevelData* _debugProceduralDatas;

	UPROPERTY(Replicated, Transient)
	ADBDClientSyncer* _syncer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Export)
	UBlackboardComponent* _blackboardComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	UEdgeObjectHandlingStrategy* _edgeObjectHandlingStrategy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	ATile* _backupKillerLairTile;

public:
	UFUNCTION()
	void SyncSeeds();

	UFUNCTION()
	void StartGenerationOnSyncerReady();

public:
	UFUNCTION(BlueprintCallable)
	AActor* SpawnActor(UClass* actorClass, ETileSpawnPointType spawnPointType);

	UFUNCTION(BlueprintImplementableEvent)
	void RemoveMist();

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DebugShareGenerationData(FGenerationParams usedParams);

	UFUNCTION(BlueprintCallable)
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
