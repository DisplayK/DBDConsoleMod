#pragma once

#include "CoreMinimal.h"
#include "ManagedGameplayElementData.h"
#include "ESurvivorGrouping.h"
#include "ArrayOfSceneComponent.h"
#include "Dependency.h"
#include "ForceSpawnTileData.h"
#include "GeneratedLevelData.generated.h"

class USceneComponent;
class AActor;

USTRUCT(BlueprintType)
struct FGeneratedLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FString UsedPaperTileMap;

	UPROPERTY(BlueprintReadOnly)
	FString PremadeMap;

	UPROPERTY(BlueprintReadOnly)
	int32 StreamRelatedSeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 AvailableEscapeCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 AvailableSurvivorItemCount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESurvivorGrouping GroupingType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	USceneComponent* KillerSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> SurvivorSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> InteractableElementsSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, int32> SpecialBehaviourRequestCounts;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, FArrayOfSceneComponent> SpecialBehaviourSpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, FArrayOfSceneComponent> SpecialBehaviourActorSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> SearchableSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> HexSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> KillerLairSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> HatchSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> MainBuildingHatchSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> ShackHatchSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> BreakableWallSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> EscapeSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FManagedGameplayElementData BookshelfManagedGameplayElementData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FManagedGameplayElementData MeatHookManagedGameplayElementData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FDependency> LevelDependencies;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FDependency> LateLevelDependencies;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<AActor*> FixedMapTileIds;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<AActor*> FixedMapOrphanSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<USceneComponent*> FinisherMoriSpawnPoints;

	UPROPERTY(BlueprintReadOnly)
	FName SpecialEventId;

	UPROPERTY()
	bool UseForcedMap;

	UPROPERTY()
	bool UsePremadeMap;

	UPROPERTY()
	FString GenerationLogs;

	UPROPERTY()
	FString GenerationErrors;

	UPROPERTY()
	int32 GenerationPlayerCount;

	UPROPERTY()
	TArray<FForceSpawnTileData> ForceSpawnTileData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<AActor*> LevelLightings;

public:
	DEADBYDAYLIGHT_API FGeneratedLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FGeneratedLevelData) { return 0; }
