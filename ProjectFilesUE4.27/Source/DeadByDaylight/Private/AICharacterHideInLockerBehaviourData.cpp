#include "AICharacterHideInLockerBehaviourData.h"
#include "ECharacterMovementTypes.h"

class ALocker;

void UAICharacterHideInLockerBehaviourData::Init(ALocker* locker, ECharacterMovementTypes characterMovementTypeNew)
{

}

UAICharacterHideInLockerBehaviourData::UAICharacterHideInLockerBehaviourData()
{
	this->TargetLocker = NULL;
	this->CharacterMovementType = ECharacterMovementTypes::Normal;
}
