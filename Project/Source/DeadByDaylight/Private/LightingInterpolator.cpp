#include "LightingInterpolator.h"

class USkyLightComponent;
class UExponentialHeightFogComponent;
class ULightComponent;

void ULightingInterpolator::LerpSkylight(USkyLightComponent* Target, USkyLightComponent* A, USkyLightComponent* B, float alpha)
{

}

void ULightingInterpolator::LerpLight(ULightComponent* Target, ULightComponent* A, ULightComponent* B, float alpha)
{

}

void ULightingInterpolator::LerpHeightFog(UExponentialHeightFogComponent* Target, const UExponentialHeightFogComponent* A, const UExponentialHeightFogComponent* B, float alpha, float thresholdBeforeSwitchingtoB)
{

}

ULightingInterpolator::ULightingInterpolator()
{
	this->_targetLighting = NULL;
}
