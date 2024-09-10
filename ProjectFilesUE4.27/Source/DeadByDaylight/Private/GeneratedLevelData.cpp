#include "GeneratedLevelData.h"

FGeneratedLevelData::FGeneratedLevelData()
{
	this->UsedPaperTileMap = TEXT("");
	this->PremadeMap = TEXT("");
	this->StreamRelatedSeed = 0;
	this->AvailableEscapeCount = 0;
	this->AvailableSurvivorItemCount = 0;
	this->GroupingType = ESurvivorGrouping::Invalid;
	this->KillerSpawnPoint = NULL;
	this->SurvivorSpawnPoints = TArray<USceneComponent*>();
	this->InteractableElementsSpawnPoints = TArray<USceneComponent*>();
	this->SpecialBehaviourRequestCounts = TMap<FName, int32>();
	this->SpecialBehaviourSpawnPoints = TMap<FName, FArrayOfSceneComponent>();
	this->SpecialBehaviourActorSpawners = TMap<FName, FArrayOfSceneComponent>();
	this->SearchableSpawners = TArray<USceneComponent*>();
	this->HexSpawners = TArray<USceneComponent*>();
	this->KillerLairSpawners = TArray<USceneComponent*>();
	this->HatchSpawners = TArray<USceneComponent*>();
	this->MainBuildingHatchSpawners = TArray<USceneComponent*>();
	this->ShackHatchSpawners = TArray<USceneComponent*>();
	this->BreakableWallSpawners = TArray<USceneComponent*>();
	this->EscapeSpawners = TArray<USceneComponent*>();
	this->BookshelfManagedGameplayElementData = FManagedGameplayElementData{};
	this->MeatHookManagedGameplayElementData = FManagedGameplayElementData{};
	this->LevelDependencies = TArray<FDependency>();
	this->LateLevelDependencies = TArray<FDependency>();
	this->FixedMapTileIds = TArray<AActor*>();
	this->FixedMapOrphanSpawners = TArray<AActor*>();
	this->FinisherMoriSpawnPoints = TArray<USceneComponent*>();
	this->SpecialEventId = NAME_None;
	this->UseForcedMap = false;
	this->UsePremadeMap = false;
	this->GenerationLogs = TEXT("");
	this->GenerationErrors = TEXT("");
	this->GenerationPlayerCount = 0;
	this->ForceSpawnTileData = TArray<FForceSpawnTileData>();
	this->LevelLightings = TArray<AActor*>();
}
