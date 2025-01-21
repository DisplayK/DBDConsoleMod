#include "BalancedLanding.h"

void UBalancedLanding::Server_WarnBalancedLandingPredicted_Implementation()
{

}

void UBalancedLanding::Client_UnvalidateBalanceLanding_Implementation()
{

}

UBalancedLanding::UBalancedLanding()
{
	this->_staggerReductionEffect = NULL;
	this->_activableExhaustedEffect = NULL;
	this->_sprintDuration = 3.000000;
	this->_exhaustionDurationPerLevel = 0.000000;
	this->_exhaustedEffect = NULL;
}
