#include "SecondaryInteractionProperties.h"

FSecondaryInteractionProperties::FSecondaryInteractionProperties()
{
	this->SecondaryInteractionID = TEXT("");
	this->SecondaryInteractionInputType = EInputInteractionType::VE_None;
	this->SecondaryInteractionDescriptionText = FText::GetEmpty();
	this->ShouldShow = false;
}
