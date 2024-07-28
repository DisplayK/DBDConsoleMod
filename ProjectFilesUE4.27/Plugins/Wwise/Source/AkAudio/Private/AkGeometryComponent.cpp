#include "AkGeometryComponent.h"

void UAkGeometryComponent::UpdateGeometry()
{

}

void UAkGeometryComponent::SendGeometry()
{

}

void UAkGeometryComponent::RemoveGeometry()
{

}

void UAkGeometryComponent::ConvertMesh()
{

}

UAkGeometryComponent::UAkGeometryComponent()
{
	this->MeshType = AkMeshType::StaticMesh;
	this->LOD = 0;
	this->WeldingThreshold = 0.001000;
	this->StaticMeshSurfaceOverride = TMap<UMaterialInterface*, FAkGeometrySurfaceOverride>();
	this->bEnableDiffraction = true;
	this->bEnableDiffractionOnBoundaryEdges = false;
	this->AssociatedRoom = NULL;
	this->SurfaceAreas = TMap<int32, float>();
}
