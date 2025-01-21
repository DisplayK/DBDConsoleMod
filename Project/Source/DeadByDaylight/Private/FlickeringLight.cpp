#include "FlickeringLight.h"

class ULocalLightComponent;

void AFlickeringLight::StopFlickering()
{

}

void AFlickeringLight::StartFlickering()
{

}

void AFlickeringLight::Init()
{

}

bool AFlickeringLight::GetSecondaryLightVisibilty()
{
	return false;
}

ULocalLightComponent* AFlickeringLight::GetSecondaryLightComponent()
{
	return NULL;
}

ULocalLightComponent* AFlickeringLight::GetActiveLightComponent()
{
	return NULL;
}

AFlickeringLight::AFlickeringLight()
{
	this->_lightComponentType = FlickeringLightType::Point;
	this->_detailLevelBeforeCastShadows = DM_Medium;
	this->_innerConneAngle = 5.000000;
	this->_outerConneAngle = 10.000000;
	this->_sourceLength = 0.000000;
	this->_sourceRadius = 0.000000;
	this->_intensity = 250.000000;
	this->_generatorActivated = false;
	this->_isTimelineSpeedRandom = true;
	this->_maximumTimelimeSpeed = 2.000000;
	this->_minimumTimelimeSpeed = 0.500000;
	this->_secondaryLightIntensity = 250.000000;
	this->_secondaryLightAttenuationRadius = 1000.000000;
	this->_secondaryLightSpecularScale = 100.000000;
	this->_isAlwaysCapturedAsON = false;
	this->_lightIntensityTimeline = NULL;
	this->_pointLightComponent = NULL;
	this->_secondaryPointLightComponent = NULL;
	this->_rectLightComponent = NULL;
	this->_spotLightComponent = NULL;
}
