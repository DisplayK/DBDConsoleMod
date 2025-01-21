#include "DBDAIPerceptionComponent.h"

UDBDAIPerceptionComponent::UDBDAIPerceptionComponent()
{
	this->_objOverridingSenses = TMap<UClass*, UObject*>();
	this->_originalSenseConfigs = TArray<UAISenseConfig*>();
	this->_detectedHostileStimuli = TArray<FAIDetectedStimulus>();
	this->ThreatDividerForNonControlledActor = 3.000000;
	this->HighThreatDistanceForNonControlledActor = 200.000000;
	this->TerrorDistanceMultiplierForNonControlledActor = 3.000000;
}
