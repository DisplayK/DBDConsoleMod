#include "PowerButton.h"
#include "EActionButtonState.h"

class UActionButton;

void UPowerButton::SetSwitchIconActive(bool active)
{

}

void UPowerButton::SetState(EActionButtonState state)
{

}

void UPowerButton::SetRadialProgressBarActice(bool active)
{

}

void UPowerButton::SetPowerIntensityOpacity(float opacity)
{

}

void UPowerButton::SetFillProgressPercentage(const float chargeProgressionPercentage)
{

}

bool UPowerButton::IsRadialProgressBarActive()
{
	return false;
}

UActionButton* UPowerButton::GetActionButton()
{
	return NULL;
}

UPowerButton::UPowerButton()
{
	this->Button = NULL;
	this->SwitchIcon = NULL;
	this->CountContainer = NULL;
	this->RadialProgressBarContainer = NULL;
	this->CountLabel = NULL;
	this->TierImage = NULL;
	this->AddonsContainer = NULL;
	this->FirstAddonSlot = NULL;
	this->SecondAddonSlot = NULL;
	this->FillPowerChargeProgression = NULL;
	this->DisabledOpacity = 0.400000;
	this->EnabledOpacity = 1.000000;
	this->EnabledLongPressed = false;
	this->_itemCount = 0;
}
