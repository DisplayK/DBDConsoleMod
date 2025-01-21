#include "LightingData.h"

ULightingData::ULightingData()
{
	this->DefaultLighting = NULL;
	this->DefaultAtlantaLighting = NULL;
	this->Descriptions = TArray<FSceneLightingDescription>();
	this->AdaptiveShadowMapControllersActor = NULL;
}
