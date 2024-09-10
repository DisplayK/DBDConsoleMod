#include "EmblemProgressionID.h"

FEmblemProgressionID::FEmblemProgressionID()
{
	this->EmblemProgressionType = EEmblemProgressionType::SurvivorLightbringerStartingValue;
	this->DefaultDescription = FText::GetEmpty();
	this->DescriptionsByQuality = TArray<FEmblemProgressionDescriptionByQuality>();
}
