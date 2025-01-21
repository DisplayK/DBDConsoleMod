#include "GameNotificationData.h"

FGameNotificationData::FGameNotificationData()
{
	this->PromptType = EPromptType::None;
	this->Priority = EPromptPriority::Tutorial;
	this->Content = FText::GetEmpty();
}
