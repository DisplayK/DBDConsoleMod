#include "AtlantaEventsTemplateDataAsset.h"

UAtlantaEventsTemplateDataAsset::UAtlantaEventsTemplateDataAsset()
{
	this->Data = TMap<EEventsType, TSubclassOf<UUMGAtlantaBaseEventsTemplate>>();
}
