#include "InteractionPromptViewData.h"

FInteractionPromptViewData::FInteractionPromptViewData()
{
	this->Id = NAME_None;
	this->Message = TEXT("");
	this->Type = EInteractionPromptType::PressButton;
	this->InputKey1 = FKey{};
	this->InputKey2 = FKey{};
	this->InputKey3 = FKey{};
	this->InputKey4 = FKey{};
	this->PlaceInCenter = false;
	this->IsAvailable = false;
}
