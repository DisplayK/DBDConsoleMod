#include "HoudiniStaticMeshGenerationProperties.h"

FHoudiniStaticMeshGenerationProperties::FHoudiniStaticMeshGenerationProperties()
{
	this->bGeneratedDoubleSidedGeometry = false;
	this->GeneratedPhysMaterial = NULL;
	this->DefaultBodyInstance = FBodyInstance{};
	this->GeneratedCollisionTraceFlag = CTF_UseDefault;
	this->GeneratedLightMapResolution = 0;
	this->GeneratedWalkableSlopeOverride = FWalkableSlopeOverride{};
	this->GeneratedLightMapCoordinateIndex = 0;
	this->bGeneratedUseMaximumStreamingTexelRatio = false;
	this->GeneratedStreamingDistanceMultiplier = 0.0f;
	this->GeneratedFoliageDefaultSettings = NULL;
	this->GeneratedAssetUserData = TArray<UAssetUserData*>();
}
