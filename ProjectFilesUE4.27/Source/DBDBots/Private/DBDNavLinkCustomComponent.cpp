#include "DBDNavLinkCustomComponent.h"

void UDBDNavLinkCustomComponent::OnLevelReadyToPlay()
{

}

UDBDNavLinkCustomComponent::UDBDNavLinkCustomComponent()
{
	this->BaseLinkDirection = ENavLinkDirection::BothWays;
	this->AutoSnapSmartLinkPointsUpHeight = 0.000000;
	this->AutoSnapSmartLinkPointsDownHeight = 0.000000;
	this->AutoSnapCollisionChannel = ECC_Pawn;
	this->AutoSmartLinkDirectionMaxHeight = 0.000000;
	this->DisableSmartLinkOnPathObstruction = false;
	this->PathObstructionTestDistance = 200.000000;
	this->PathObstructionTestShapeRadius = 50.000000;
	this->PathObstructionTestHeightOffset = 80.000000;
	this->PathObstructionCollisionChannel = ECC_Pawn;
	this->DisableOtherSmartLinkInProximityOnEnable = false;
	this->EnableOtherSmartLinkInProximityOnDisable = false;
	this->OtherSmartLinkInProximitySearchDistance = 100.000000;
	this->ShowDebugInfo = false;
	this->_navLinkProxyInProximity = TArray<ANavLinkProxy*>();
}
