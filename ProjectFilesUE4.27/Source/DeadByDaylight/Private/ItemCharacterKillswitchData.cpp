#include "ItemCharacterKillswitchData.h"

FItemCharacterKillswitchData::FItemCharacterKillswitchData()
{
	this->CharacterFallback = FCharacterFallbackData{};
	this->DisabledItems = TArray<FString>();
	this->DisabledItems_IsSet = false;
}
