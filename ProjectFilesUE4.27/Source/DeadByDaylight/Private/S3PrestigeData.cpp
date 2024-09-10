#include "S3PrestigeData.h"

FS3PrestigeData::FS3PrestigeData()
{
	this->Config = FS3PrestigeConfig{};
	this->RewardsByCharacters = TMap<FString, FS3PrestigeCharacterRewards>();
}
