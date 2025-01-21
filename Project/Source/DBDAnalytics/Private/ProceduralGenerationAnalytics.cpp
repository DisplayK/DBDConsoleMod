#include "ProceduralGenerationAnalytics.h"

FProceduralGenerationAnalytics::FProceduralGenerationAnalytics()
{
	this->GenerationSeed = 0;
	this->MapSeed = 0;
	this->MapName = TEXT("");
	this->Procedural_MeatLocker_Small = TEXT("");
	this->Procedural_MeatLocker_Big = TEXT("");
	this->Procedural_Searchable = TEXT("");
	this->Procedural_EdgeObjects = TEXT("");
	this->Procedural_LivingWorldObjects = TEXT("");
	this->Procedural_Hatch = TEXT("");
	this->Procedural_BookShelves = TEXT("");
	this->Procedural_BreakableWalls = TEXT("");
	this->Procedural_Totems = TEXT("");
	this->Procedural_QuadrantSpawn = TEXT("");
	this->PalletSpawned = 0;
	this->PalletProceduralMin = 0;
	this->PalletProceduralMax = 0;
	this->PalletProcedural = 0;
	this->PalletProceduralSetCount = 0;
	this->PalletGenerationId = 0;
	this->PalletGeneric = 0;
	this->KillerSpawn = TEXT("");
	this->SurvivorSpawn = TEXT("");
	this->MatchId = TEXT("");
	this->HookSpawned = 0;
	this->UseFixedMaps = false;
	this->NavmeshGenerationTime = 0.0f;
}
