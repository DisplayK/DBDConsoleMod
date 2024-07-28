#include "DBDScrollBox.h"
#include "EControlMode.h"

class UCoreKeyListenerInputPromptWidget;

void UDBDScrollBox::UpdateSmoothMask(float currentOffset)
{

}

void UDBDScrollBox::UpdateDisplayPrompt()
{

}

void UDBDScrollBox::SetDisplayPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt)
{

}

void UDBDScrollBox::OnControlModeChanged(EControlMode controlMode)
{

}

bool UDBDScrollBox::IsMouseOver()
{
	return false;
}

void UDBDScrollBox::HandleControllerInput(float analogValue)
{

}

UDBDScrollBox::UDBDScrollBox()
{
	this->_useControllerScroll = true;
	this->_shouldScrollOnMouseOver = true;
	this->_scrollSpeed = 7.500000;
	this->_displayPrompt = NULL;
	this->_displayPromptText = FText::GetEmpty();
	this->_showDisplayPrompt = EShowScrollDisplayPrompt::DontShow;
	this->IsUsingSmoothMask = false;
	this->SmoothMaskRetainerBox = NULL;
}
