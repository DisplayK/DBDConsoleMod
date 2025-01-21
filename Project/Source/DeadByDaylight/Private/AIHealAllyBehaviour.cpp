#include "AIHealAllyBehaviour.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"

class ADBDPlayer;
class UAICharacterBehaviourData;

void UAIHealAllyBehaviour::TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result)
{

}

void UAIHealAllyBehaviour::Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData)
{

}

UAIHealAllyBehaviour::UAIHealAllyBehaviour()
{
	this->_behaviourData = NULL;
	this->_aiController = NULL;
	this->_aiPlayer = NULL;
}
