#include "AIMoveToPosition.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"

class ADBDPlayer;
class UAICharacterBehaviourData;

void UAIMoveToPosition::TargetPositionReached(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result)
{

}

void UAIMoveToPosition::Init(ADBDPlayer* character, UAICharacterBehaviourData* behaviourData)
{

}

UAIMoveToPosition::UAIMoveToPosition()
{
	this->_aiBehaviourData = NULL;
	this->_aiController = NULL;
}
