#include "NavLinkProxy_Base.h"
#include "UObject/NoExportTypes.h"

class AActor;

void ANavLinkProxy_Base::OnSmartLinkReachedCallback(AActor* MovingActor, const FVector& DestinationPoint)
{

}

void ANavLinkProxy_Base::AutoAdjustSmartLinkPoints()
{

}

ANavLinkProxy_Base::ANavLinkProxy_Base()
{
	this->WaitLinkOffset = 250.000000;
	this->MoveOnEndPointTimeLimit = 2.000000;
	this->NbMaxLinkUsers = 1;
	this->_players = TMap<ADBDPlayer*, FMoveLinkPlayerInfo>();
	this->_linkUsedByPlayers = TArray<ADBDPlayer*>();
}
