#include "GMAdaptiveShadowMapSourceComponent.h"
#include "UObject/NoExportTypes.h"

void UGMAdaptiveShadowMapSourceComponent::SetLightRadiusWithBounds(FVector BoundingSphereCenter, float BoundingSphereRadius)
{

}

UGMAdaptiveShadowMapSourceComponent::UGMAdaptiveShadowMapSourceComponent()
{
	this->bUseAutoRadius = false;
	this->Radius = 10000.000000;
	this->DepthMin = -10000.000000;
	this->DepthMax = 10000.000000;
	this->Levels = 4;
	this->PreGeneratedLevels = 2;
}
