#include "ReportAnalytics.h"

FReportAnalytics::FReportAnalytics()
{
	this->ClientIdTransmitter = TEXT("");
	this->ClientIdReceiver = TEXT("");
	this->MirrorsIdTransmitter = TEXT("");
	this->MirrorsIdReceiver = TEXT("");
	this->RoleTransmitter = EPlayerRole::VE_None;
	this->RoleReceiver = EPlayerRole::VE_None;
	this->MatchId = TEXT("");
	this->GameMode = TEXT("");
	this->ReportType = TEXT("");
	this->ReportCategory = TEXT("");
	this->Comments = TEXT("");
}
