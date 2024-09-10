#include "DBD_SoundSpawnerData.h"

FDBD_SoundSpawnerData::FDBD_SoundSpawnerData()
{
	this->TriggerObject = TArray<TSoftClassPtr<UObject>>();
	this->TriggerVisualForCamper = false;
	this->TriggerVisualForSlasher = false;
	this->ActorToSpawnVisual = TArray<TSoftClassPtr<AActor>>();
}
