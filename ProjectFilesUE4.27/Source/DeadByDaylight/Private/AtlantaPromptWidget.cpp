#include "AtlantaPromptWidget.h"

UAtlantaPromptWidget::UAtlantaPromptWidget()
{
	this->PromptLabel = NULL;
	this->AudioCues = TMap<EPromptType, FString>();
}
