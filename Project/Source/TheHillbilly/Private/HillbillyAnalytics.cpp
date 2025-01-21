#include "HillbillyAnalytics.h"

FHillbillyAnalytics::FHillbillyAnalytics()
{
	this->OverheatEvents = TArray<FChainsawEvent>();
	this->OverheatWhileSprintingEvents = TArray<FChainsawEvent>();
	this->OverheatWhileCampingEvents = TArray<FChainsawEventWhileCamping>();
	this->RevFromZeroHeatEvents = TArray<FChainsawEvent>();
}
