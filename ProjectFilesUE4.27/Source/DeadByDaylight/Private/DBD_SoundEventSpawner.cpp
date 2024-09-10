#include "DBD_SoundEventSpawner.h"
#include "UObject/NoExportTypes.h"

class AActor;

void ADBD_SoundEventSpawner::OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise)
{

}

void ADBD_SoundEventSpawner::AssetsLoaded()
{

}

ADBD_SoundEventSpawner::ADBD_SoundEventSpawner()
{
	this->AtlantaSoundDescriptor = TArray<FDBD_SoundSpawnerData>();
	this->SoundDescriptor = TArray<FDBD_SoundSpawnerData>();
	this->_loadedSoundAssets = TArray<TSubclassOf<AActor>>();
}
