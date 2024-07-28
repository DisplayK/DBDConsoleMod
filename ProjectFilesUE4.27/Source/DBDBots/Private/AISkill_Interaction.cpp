#include "AISkill_Interaction.h"

UAISkill_Interaction::UAISkill_Interaction()
{
	this->InputType = EPawnInputPressTypes::None;
	this->InputMode = EInteractionSkillInputModes::Once;
	this->CancelInputType = EPawnInputPressTypes::None;
	this->CancelInputMode = EInteractionCancelInputModes::PressCancelInput;
	this->AutoLockInput = true;
	this->StartInteractionID = TEXT("");
	this->StopInteractionID = TEXT("");
	this->MinHoldInputTime = 0.000000;
	this->AutoReleaseHoldInputWhenCharged = false;
}
