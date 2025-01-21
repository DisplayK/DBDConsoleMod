#include "K28KillerTeleportationComponent.h"
#include "K28SecondaryCameraMovementData.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class UK28LockerComponent;
class ACamperPlayer;

void UK28KillerTeleportationComponent::OnPlayerFinishedEnteringLocker(ADBDPlayer* playerThatWasInLocker, ADBDPlayer* playerNowInLocker)
{

}

void UK28KillerTeleportationComponent::OnLevelReadyToPlay()
{

}

void UK28KillerTeleportationComponent::Multicast_TeleportToLockerStart_Implementation(FK28SecondaryCameraMovementData cameraMovementData, UK28LockerComponent* lockerBeingTeleportedTo, ACamperPlayer* survivorToGrab)
{

}

void UK28KillerTeleportationComponent::Multicast_TeleportToLockerEnd_Implementation(UK28LockerComponent* lockerTeleportedTo, ACamperPlayer* survivorInLocker)
{

}

void UK28KillerTeleportationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK28KillerTeleportationComponent, _isTeleporting);
}

UK28KillerTeleportationComponent::UK28KillerTeleportationComponent()
{
	this->_defaultTeleportationCurve = NULL;
	this->_grabTeleportationCurve = NULL;
}
