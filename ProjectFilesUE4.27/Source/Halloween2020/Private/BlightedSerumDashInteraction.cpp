#include "BlightedSerumDashInteraction.h"

class UBlightedSerumCooldownInteraction;
class UBlightedSerumCollisionInteraction;

void UBlightedSerumDashInteraction::SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction)
{

}

void UBlightedSerumDashInteraction::SetCollisionInteraction(UBlightedSerumCollisionInteraction* collisionInteraction)
{

}

UBlightedSerumDashInteraction::UBlightedSerumDashInteraction()
{
	this->_cooldownInteraction = NULL;
	this->_collisionInteraction = NULL;
	this->_dashSpeedCurve = NULL;
	this->_lookAngleToTurnRateCurveController = NULL;
	this->_lookAngleToTurnRateCurveMouse = NULL;
	this->_dashDuration = 0.000000;
	this->_vectorInterpToSpeed = 0.000000;
	this->_wallDashAccelerationMultiplier = 0.000000;
	this->_cameraPitchRecenterTime = 0.000000;
	this->_lookAngleTurnRateModifier = 1.000000;
	this->_wallDashCollisionRadius = 0.000000;
	this->_wallDashCollisionHeight = 0.000000;
	this->_wallDashCollisionRange = 0.000000;
}
