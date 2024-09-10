#include "KrakenRequestAnalytics.h"

FKrakenRequestAnalytics::FKrakenRequestAnalytics()
{
	this->KrakenUrl = TEXT("");
	this->Method = TEXT("");
	this->Route = TEXT("");
	this->Status = TEXT("");
	this->ResponseCode = 0;
	this->ProviderError = 0;
	this->AttemptCount = 0;
	this->Success = false;
	this->CanRetry = false;
	this->WillRetry = false;
	this->Country = TEXT("");
	this->AttemptElapsedTime = 0.0f;
	this->TotalElapsedTime = 0.0f;
	this->TotalElapsedTimeCapped = 0.0f;
}
