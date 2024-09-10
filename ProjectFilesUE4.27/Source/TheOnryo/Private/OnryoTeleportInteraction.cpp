#include "OnryoTeleportInteraction.h"
#include "ConeAroundDirectionCameraStrategy.h"

UOnryoTeleportInteraction::UOnryoTeleportInteraction()
{
	this->_cachedOwningKiller = NULL;
	this->_currentTargetTelevision = NULL;
	this->_postTeleportSpeedCurve = NULL;
	this->_postTeleportAlternateSpeedCurve = NULL;
	this->_offsetHeight = 30.000000;
	this->_raycastLength = 80.000000;
	this->_cameraStrategyClass = UConeAroundDirectionCameraStrategy::StaticClass();
	this->_cameraMaximumAngleFactorCurve = NULL;
	this->_cameraStrategy = NULL;
}
