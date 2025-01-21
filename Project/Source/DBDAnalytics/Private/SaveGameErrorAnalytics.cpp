#include "SaveGameErrorAnalytics.h"

FSaveGameErrorAnalytics::FSaveGameErrorAnalytics()
{
	this->ErrorCode = 0;
	this->Category = TEXT("");
	this->ErrorDetails = TEXT("");
	this->KrakenErrorCode = 0;
	this->StateName = TEXT("");
}
