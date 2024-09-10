#include "BTService_SetMovementMode.h"

UBTService_SetMovementMode::UBTService_SetMovementMode()
{
	this->OnEnterMovementMode = ECharacterMovementTypes::Normal;
	this->OnExitMovementMode = ECharacterMovementTypes::Normal;
}
