#include "AkGeometryData.h"

FAkGeometryData::FAkGeometryData()
{
	this->Vertices = TArray<FVector>();
	this->Surfaces = TArray<FAkAcousticSurface>();
	this->Triangles = TArray<FAkTriangle>();
	this->ToOverrideAcousticTexture = TArray<UPhysicalMaterial*>();
	this->ToOverrideOcclusion = TArray<UPhysicalMaterial*>();
}
