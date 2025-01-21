#include "DDoSDetectionAnalytics.h"

FDDoSDetectionAnalytics::FDDoSDetectionAnalytics()
{
	this->Severity = TEXT("");
	this->MatchId = TEXT("");
	this->NonConnPacketCounter = 0;
	this->NetConnPacketCounter = 0;
	this->DisconnPacketCounter = 0;
	this->BadPacketCounter = 0;
	this->ErrorPacketCounter = 0;
	this->DroppedPacketCounter = 0;
}
