#include "DedicatedServerStatusAnalytics.h"

FDedicatedServerStatusAnalytics::FDedicatedServerStatusAnalytics()
{
	this->DSSessionProvider = TEXT("");
	this->ServerStatus = TEXT("");
	this->GameLiftSessionId = TEXT("");
	this->MatchId = TEXT("");
	this->SessionEndReason = TEXT("");
	this->FleetId = TEXT("");
	this->IpAddress = TEXT("");
	this->Port = 0;
	this->DnsName = TEXT("");
}
