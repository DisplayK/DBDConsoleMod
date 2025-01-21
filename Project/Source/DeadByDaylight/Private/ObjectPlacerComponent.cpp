#include "ObjectPlacerComponent.h"
#include "UObject/NoExportTypes.h"

class UStaticMeshComponent;

void UObjectPlacerComponent::SetShowIndicator(bool newValue)
{

}

void UObjectPlacerComponent::SetObjectMesh(UStaticMeshComponent* objectMesh)
{

}

void UObjectPlacerComponent::SetMeshOffsetZ(float z)
{

}

void UObjectPlacerComponent::SetIndicatorOffsetY(float y)
{

}

void UObjectPlacerComponent::SetIndicatorOffsetX(float x)
{

}

void UObjectPlacerComponent::SetHideIndicatorDuringAttack(bool enable)
{

}

bool UObjectPlacerComponent::IsPlacementValid() const
{
	return false;
}

FRotator UObjectPlacerComponent::GetObjectPlacementRotation() const
{
	return FRotator{};
}

FVector UObjectPlacerComponent::GetObjectPlacementLocation() const
{
	return FVector{};
}

void UObjectPlacerComponent::ActivateObjectPlacement(bool active)
{

}

UObjectPlacerComponent::UObjectPlacerComponent()
{
	this->_objectMesh = NULL;
	this->_socketName = TEXT("CamperAttach_SocketRT");
	this->_indicatorOffsetY = 0.000000;
	this->_indicatorOffsetX = 0.000000;
	this->_meshOffsetZ = 0.000000;
	this->_itemObjectId = NAME_None;
	this->_showIndicator = true;
	this->_stayActiveWhileItemInUse = false;
	this->_hideIndicatorDuringAttack = true;
	this->_objectPlacementUpdateStrategy = NULL;
	this->_objectPlacementValidationStrategy = NULL;
}
