#include "AtlantaFreeTicketAffectedUIData.h"

FAtlantaFreeTicketAffectedUIData::FAtlantaFreeTicketAffectedUIData()
{
	this->InEffectBGFilePath = TEXT("");
	this->Id = NAME_None;
	this->EndDate = FDateTime{};
	this->HasFreeTicketToUse = false;
}
