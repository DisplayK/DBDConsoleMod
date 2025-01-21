#include "ActionButton.h"
#include "EActionButtonState.h"
#include "Styling/SlateBrush.h"

void UActionButton::SetState(EActionButtonState state)
{

}

void UActionButton::SetSlateBrush(const FSlateBrush& InBrush)
{

}

void UActionButton::SetPreviousState()
{

}

void UActionButton::SetIcon(FSlateBrush slateBrush)
{

}

UActionButton::UActionButton()
{
	this->IconImage = NULL;
	this->ToggleSmokeImage = NULL;
	this->Button = NULL;
	this->DefaultOpacity = 0.800000;
	this->ToggledOpacity = 1.000000;
	this->DisabledOpacity = 0.400000;
	this->_currentState = EActionButtonState::Normal;
	this->_previousState = EActionButtonState::Normal;
}
