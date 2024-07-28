#include "PakValidationAnalytics.h"

FPakValidationAnalytics::FPakValidationAnalytics()
{
	this->ErrorType = TEXT("");
	this->Filename = TEXT("");
	this->ChunkIndex = 0;
	this->ReceivedHash = 0;
}
