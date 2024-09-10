#include "SceneLightingDescription.h"

FSceneLightingDescription::FSceneLightingDescription()
{
	this->ThemeName = NAME_None;
	this->LightingDetailsLowMedium = FLightingSpecifics{};
	this->LightingDetailsHighUltra = FLightingSpecifics{};
	this->LightingAtlanta = FLightingSpecifics{};
	this->TextureCube = NULL;
}
