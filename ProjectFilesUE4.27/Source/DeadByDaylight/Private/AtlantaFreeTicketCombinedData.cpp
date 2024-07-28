#include "AtlantaFreeTicketCombinedData.h"

FAtlantaFreeTicketCombinedData::FAtlantaFreeTicketCombinedData()
{
	this->UIData = FAtlantaFreeTicketUIData{};
	this->Role = EPlayerRole::VE_None;
	this->DurationInMinutes = 0;
	this->Quantity = 0;
}
