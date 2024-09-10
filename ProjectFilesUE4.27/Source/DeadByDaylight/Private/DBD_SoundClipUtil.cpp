#include "DBD_SoundClipUtil.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;
class UStaticMeshComponent;
class UAkAudioEvent;

void UDBD_SoundClipUtil::OnCharacterEnterSoundRegion(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

UAkAudioEvent* UDBD_SoundClipUtil::GetAudioEventForMesh(UStaticMeshComponent* usm)
{
	return NULL;
}

UDBD_SoundClipUtil::UDBD_SoundClipUtil()
{
	this->AudioMap = TArray<FMapMeshToAkAudioEvent>();
	this->_audioEventMap = TMap<FName, FMapMeshToAkAudioEvent>();
	this->_objectsWhoHavePlayedASound = TArray<FMapSoundsToAvoid>();
	this->_nextSoundPlayTime = TMap<UAkAudioEvent*, float>();
}
