#include "WalesCypherAnalytics.h"

FWalesCypherAnalytics::FWalesCypherAnalytics()
{
	this->EnteredSequence = TEXT("");
	this->ExpectedSequence = TEXT("");
	this->TimeoutThreshold = 0;
	this->Success = false;
	this->Timeout = false;
	this->CharmGranted = false;
	this->ValidCharacterSelcted = 0;
}
