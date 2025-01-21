#include "InputPromptDataRow.h"

FInputPromptDataRow::FInputPromptDataRow()
{
	this->InputLabel = FText::GetEmpty();
	this->InputKey = FKey{};
	this->PromptTexture = NULL;
	this->ShowLabel = false;
}
