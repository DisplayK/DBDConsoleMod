#include "EmblemTunableData.h"

FEmblemTunableData::FEmblemTunableData()
{
	this->EmblemValues = TArray<FEmblemTunableItem>();
	this->EmblemThresholds = TMap<FString, FEmblemThreshold>();
}
