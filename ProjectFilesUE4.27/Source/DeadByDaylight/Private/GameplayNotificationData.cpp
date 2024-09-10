#include "GameplayNotificationData.h"

FGameplayNotificationData::FGameplayNotificationData()
{
	this->SourceID = NAME_None;
	this->SourceType = EInventoryItemType::None;
	this->SourceIconIndex = 0;
	this->SourceLevel = 0;
	this->EffectID = NAME_None;
	this->EffectIconFilePath = TEXT("");
	this->EffectType = EStatusEffectType::None;
	this->EffectDisplayName = FText::GetEmpty();
}
