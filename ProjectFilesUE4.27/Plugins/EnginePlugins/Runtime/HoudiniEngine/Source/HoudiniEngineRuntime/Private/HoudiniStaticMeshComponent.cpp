#include "HoudiniStaticMeshComponent.h"

class UHoudiniStaticMesh;

void UHoudiniStaticMeshComponent::SetMesh(UHoudiniStaticMesh* InMesh)
{

}

void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible)
{

}

void UHoudiniStaticMeshComponent::NotifyMeshUpdated()
{

}

bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible() const
{
	return false;
}

UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh()
{
	return NULL;
}

UHoudiniStaticMeshComponent::UHoudiniStaticMeshComponent()
{
	this->Mesh = NULL;
	this->bHoudiniIconVisible = true;
}
