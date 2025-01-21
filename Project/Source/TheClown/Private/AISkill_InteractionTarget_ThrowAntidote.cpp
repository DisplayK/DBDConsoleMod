#include "AISkill_InteractionTarget_ThrowAntidote.h"

void UAISkill_InteractionTarget_ThrowAntidote::OnPathUpdated()
{

}

UAISkill_InteractionTarget_ThrowAntidote::UAISkill_InteractionTarget_ThrowAntidote()
{
	this->_minPathLengthForThrow = 3000.000000;
	this->_minThrowDistance = 2000.000000;
	this->_cooldownTime = 30.000000;
}
