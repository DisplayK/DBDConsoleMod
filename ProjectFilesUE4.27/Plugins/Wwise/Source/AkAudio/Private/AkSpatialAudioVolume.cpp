#include "AkSpatialAudioVolume.h"
#include "AkRoomComponent.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "AkLateReverbComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume()
{
	this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
	this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
	this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
}
