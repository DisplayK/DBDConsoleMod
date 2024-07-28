#include "AkAmbientSound.h"
#include "AkComponent.h"

void AAkAmbientSound::StopAmbientSound()
{

}

void AAkAmbientSound::StartAmbientSound()
{

}

AAkAmbientSound::AAkAmbientSound()
{
	this->AkAudioEvent_DEPRECATED = NULL;
	this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent0"));
	this->StopWhenOwnerIsDestroyed = true;
	this->AutoPost = false;
}
