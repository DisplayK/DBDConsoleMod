#include "LoudNoise.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "AkComponent.h"

ALoudNoise::ALoudNoise()
{
	this->_toInfinityDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("ToInfinityDecal"));
	this->_distortionParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DistortionParticleSystem"));
	this->_ak_audio_loudNoise = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Audio_LoudNoise"));
	this->_rootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	this->_loudNoiseMinDistance = 1000.000000;
	this->_loudNoiseLifetime = 6.000000;
	this->_heightToAddToLoudNoiseLocation = 125.000000;
	this->_loudNoiseDecalDistance = 150.000000;
	this->_cameraDecalDistance = 100.000000;
}
