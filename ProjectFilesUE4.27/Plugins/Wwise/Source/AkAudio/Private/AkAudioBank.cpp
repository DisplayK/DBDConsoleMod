#include "AkAudioBank.h"

UAkAudioBank::UAkAudioBank()
{
	this->AutoLoad = true;
	this->LocalizedPlatformAssetDataMap = TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>>();
	this->LinkedAkEvents = TSet<TSoftObjectPtr<UAkAudioEvent>>();
	this->CurrentLocalizedPlatformAssetData = NULL;
}
