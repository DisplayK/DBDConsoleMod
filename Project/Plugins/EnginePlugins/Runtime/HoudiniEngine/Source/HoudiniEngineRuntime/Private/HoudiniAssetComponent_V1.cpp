#include "HoudiniAssetComponent_V1.h"

UHoudiniAssetComponent_V1::UHoudiniAssetComponent_V1()
{
	this->bGeneratedDoubleSidedGeometry = false;
	this->GeneratedPhysMaterial = NULL;
	this->GeneratedCollisionTraceFlag = CTF_UseDefault;
	this->GeneratedLightMapResolution = 0;
	this->GeneratedDistanceFieldResolutionScale = 0.000000;
	this->GeneratedLightMapCoordinateIndex = 0;
	this->bGeneratedUseMaximumStreamingTexelRatio = false;
	this->GeneratedStreamingDistanceMultiplier = 0.000000;
	this->GeneratedFoliageDefaultSettings = NULL;
	this->GeneratedAssetUserData = TArray<UAssetUserData*>();
	this->BakeFolder = FText::GetEmpty();
	this->TempCookFolder = FText::GetEmpty();
}
