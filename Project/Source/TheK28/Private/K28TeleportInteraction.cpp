#include "K28TeleportInteraction.h"

class UObject;
class ASlasherPlayer;

void UK28TeleportInteraction::Server_RequestTeleportToTarget_Implementation(ASlasherPlayer* killer, UObject* teleportTarget)
{

}

void UK28TeleportInteraction::Multicast_RefuseTeleportationRequest_Implementation()
{

}

void UK28TeleportInteraction::Multicast_ConfirmTeleportationRequest_Implementation(ASlasherPlayer* killer, UObject* teleportTarget)
{

}

void UK28TeleportInteraction::Multicast_CompleteTeleportation_Implementation()
{

}

UK28TeleportInteraction::UK28TeleportInteraction()
{
	this->_triggerTeleportInputType = EInputInteractionType::VE_None;
	this->_chargingSpeedCurve = NULL;
	this->_chargedSpeedCurve = NULL;
	this->_cancelledSpeedCurve = NULL;
	this->_releaseInputMaxTime = 0.300000;
}
