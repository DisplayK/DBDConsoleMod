#include "BloodDecalEffect.h"

UBloodDecalEffect::UBloodDecalEffect()
{
	this->AnimationTimelineCurve = NULL;
	this->DestroyTimelineCurve = NULL;
	this->Textures = TArray<UTexture2D*>();
	this->Normals = TArray<UTexture2D*>();
	this->EnableVisualEffects = true;
	this->BloodDecalEffectIntensity = NULL;
	this->ColorInterpolationSpeed = 1.000000;
	this->DefalultDecalMaterial = NULL;
}
