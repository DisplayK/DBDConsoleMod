#include "InteractButtonInfo.h"

FInteractButtonInfo::FInteractButtonInfo()
{
	this->InteractButtonID = NAME_None;
	this->InteractionID = NAME_None;
	this->PlayerRole = EPlayerRole::VE_None;
	this->InteractionInputType = EInputInteractionType::VE_None;
	this->Icon = FSlateBrush{};
	this->CancelButtonType = EButtonType::None;
	this->SecondaryActionButtonType = EButtonType::None;
	this->AttackIcon = FSlateBrush{};
	this->AbilityIcon = FSlateBrush{};
	this->ThumbJoystickUnpressedIcon = FSlateBrush{};
	this->ThumbJoystickPressedIcon = FSlateBrush{};
}
