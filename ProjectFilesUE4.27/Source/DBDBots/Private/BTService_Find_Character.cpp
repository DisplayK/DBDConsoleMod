#include "BTService_Find_Character.h"

UBTService_Find_Character::UBTService_Find_Character()
{
	this->CharacterFilter = EPawnType::VE_None;
	this->KillerAbility = EKillerAbilities::VE_None;
	this->_aiOwner = NULL;
}
