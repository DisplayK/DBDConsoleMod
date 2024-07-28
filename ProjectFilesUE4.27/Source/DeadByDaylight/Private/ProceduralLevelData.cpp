#include "ProceduralLevelData.h"

AProceduralLevelData::AProceduralLevelData()
{
	this->SelectedPaperMap = NULL;
	this->GenerationSeed = 0;
	this->LevelMood = EKillerMoodInfluence::VE_None;
	this->Offerings = TArray<FName>();
	this->PerksLevel = 0;
	this->Perks = TArray<FName>();
	this->SkipGameplayElementGeneration = false;
	this->_builder = NULL;
	this->_builderClassDef = NULL;
}
