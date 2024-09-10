#include "DisarmBearTrapInteraction.h"

UDisarmBearTrapInteraction::UDisarmBearTrapInteraction()
{
	this->_averageMaxVelocity = 100.000000;
	this->_averageMaxVelocitySquared = 10000.000000;
	this->_updateMontageID = TEXT("BearTrapDisarm_Out");
	this->_loudNoiseAudibleRangeTunable = TEXT("LoudNoiseRange_DisarmBearTrap");
}
