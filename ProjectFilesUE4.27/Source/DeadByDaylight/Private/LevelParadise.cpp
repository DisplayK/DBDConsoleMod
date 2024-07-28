#include "LevelParadise.h"
#include "ParadiseData.h"

void ALevelParadise::ParadiseEntered(const FParadiseData& playerData)
{

}

void ALevelParadise::OnInterpolationDone()
{

}

ALevelParadise::ALevelParadise()
{
	this->LoopStartDistance = 9600.000000;
	this->LoopDistance = 3200.000000;
	this->MainPlayerSpawnPoint = NULL;
	this->OtherSurvivorSpawnPoints = TArray<USceneComponent*>();
	this->ParadiseTiles = TArray<USceneComponent*>();
	this->ParadiseViewTarget = NULL;
	this->_spawnedMainPawn = NULL;
	this->_runnerComponent = NULL;
	this->_fadeOutDuration = 1.000000;
	this->_fadeInDuration = 1.000000;
}
