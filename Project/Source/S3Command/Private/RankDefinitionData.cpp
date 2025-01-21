#include "RankDefinitionData.h"

FRankDefinitionData::FRankDefinitionData()
{
	this->RankThreshold = FRankThresholdsData{};
	this->RankGroupDefinition = FRankGroups{};
	this->GlobalData = FRankGlobalData{};
}
