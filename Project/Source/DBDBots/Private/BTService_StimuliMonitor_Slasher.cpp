#include "BTService_StimuliMonitor_Slasher.h"

UBTService_StimuliMonitor_Slasher::UBTService_StimuliMonitor_Slasher()
{
	this->IgnorePreviousChasedStimulusActorDelay = 15.000000;
	this->DefaultStimulusToInvestigateMaxAge = 30.000000;
	this->KOStimulusToInvestigateMaxAge = 45.000000;
	this->NextStimulusInvestigationMinRange = 800.000000;
	this->CantSeeOverBlindRatio = 0.250000;
	this->FavorizeStandingTargetInRange = 1000.000000;
	this->FavorizeStandingTargetOutRange = 1500.000000;
}
