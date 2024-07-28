#include "MatchConfigDifficultyDataAsset.h"

UMatchConfigDifficultyDataAsset::UMatchConfigDifficultyDataAsset()
{
	this->DifficultiesData = TMap<ECustomMatchDifficulty, FMatchConfigDifficultyData>();
}
