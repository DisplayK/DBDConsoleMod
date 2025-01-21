#include "GPUAnalytics.h"

FGPUAnalytics::FGPUAnalytics()
{
	this->MatchId = TEXT("");
	this->MapName = TEXT("");
	this->Marker = TEXT("");
	this->AverageMS = 0.0f;
	this->StdDevMs = 0.0f;
}
