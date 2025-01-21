#include "BlastMineVisibilityController.h"

class UMeshComponent;
class UFXSystemComponent;

bool UBlastMineVisibilityController::IsVisible() const
{
	return false;
}

void UBlastMineVisibilityController::AddMeshComponent(UMeshComponent* meshComponent)
{

}

void UBlastMineVisibilityController::AddFXSystem(UFXSystemComponent* system)
{

}

UBlastMineVisibilityController::UBlastMineVisibilityController()
{
	this->_systems = TSet<UFXSystemComponent*>();
	this->_meshes = TSet<UMeshComponent*>();
}
