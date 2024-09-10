#include "MovableCamera.h"

AMovableCamera::AMovableCamera()
{
	this->MovementSpeed = 100.000000;
	this->RequiresShiftModifierForInput = false;
	this->_playerController = NULL;
}
