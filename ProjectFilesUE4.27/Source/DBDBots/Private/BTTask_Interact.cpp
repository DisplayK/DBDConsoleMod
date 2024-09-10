#include "BTTask_Interact.h"

UBTTask_Interact::UBTTask_Interact()
{
	this->Input = EPawnInputPressTypes::None;
	this->OnFailFocusCooldownDuration = 10.000000;
	this->PropagateCooldownOnInteractable = false;
	this->FailStartInteractTimeLimit = 4.000000;
}
