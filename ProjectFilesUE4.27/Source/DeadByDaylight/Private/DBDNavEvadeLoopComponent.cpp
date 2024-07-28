#include "DBDNavEvadeLoopComponent.h"
#include "NavigationQueryFilter_EvadeLoop.h"

void UDBDNavEvadeLoopComponent::OnLevelReadyToPlay()
{

}

UDBDNavEvadeLoopComponent::UDBDNavEvadeLoopComponent()
{
	this->EvadeDoorFrontPointOffset = 90.000000;
	this->EvadeDoorSideOffset = 60.000000;
	this->SideBlockerOffset = 300.000000;
	this->AutoSnapPointsUpHeight = 20.000000;
	this->AutoSnapPointsDownHeight = 1000.000000;
	this->AutoSnapCollisionChannel = ECC_Pawn;
	this->EvadeLoopFilterClass = UNavigationQueryFilter_EvadeLoop::StaticClass();
	this->MinSafetyLength = 600.000000;
	this->MaxSafetyLength = 2300.000000;
	this->LimitToSide = EAIEvadeLoopSides::Left;
	this->DebugEditMode = false;
	this->DrawDebugFilter = false;
}
