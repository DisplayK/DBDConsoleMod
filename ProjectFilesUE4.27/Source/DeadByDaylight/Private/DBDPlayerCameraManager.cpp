#include "DBDPlayerCameraManager.h"

ADBDPlayerCameraManager::ADBDPlayerCameraManager()
{
	this->NormalFOV = 90.000000;
	this->TargetingFOV = 60.000000;
	this->_viewRotationStrategy = NULL;
}
