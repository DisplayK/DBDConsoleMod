#include "AIRoll.h"

FAIRoll::FAIRoll()
{
	this->Random = FAITunableParameter{};
	this->OnFailCooldown = FAITunableParameter{};
}
