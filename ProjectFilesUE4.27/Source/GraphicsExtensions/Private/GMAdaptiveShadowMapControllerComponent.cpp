#include "GMAdaptiveShadowMapControllerComponent.h"

void UGMAdaptiveShadowMapControllerComponent::RebuildAtlas()
{

}

bool UGMAdaptiveShadowMapControllerComponent::IsControllerDonePreallocatingTiles()
{
	return false;
}

int32 UGMAdaptiveShadowMapControllerComponent::GetTileSize()
{
	return 0;
}

int32 UGMAdaptiveShadowMapControllerComponent::GetTileCountY()
{
	return 0;
}

int32 UGMAdaptiveShadowMapControllerComponent::GetTileCountX()
{
	return 0;
}

void UGMAdaptiveShadowMapControllerComponent::DumpDebugInfo()
{

}

UGMAdaptiveShadowMapControllerComponent::UGMAdaptiveShadowMapControllerComponent()
{
	this->TileCountX = 8;
	this->TileCountY = 8;
	this->GeneratedTilesPerFrame = 1;
	this->bSupportsDirectionalLights = true;
	this->bSupportsSpotLights = true;
	this->LightFunctionMaterial = NULL;
	this->CullShadowIfPixelSizeLessThan = 5.000000;
	this->bPreviewOnly = false;
	this->_atlas = NULL;
	this->_controller = NULL;
	this->_shadowMapSources = TMap<UGMAdaptiveShadowMapSourceComponent*, UGMAdaptiveShadowMapSource*>();
	this->_lightFunctionMaterialInstance = NULL;
}
