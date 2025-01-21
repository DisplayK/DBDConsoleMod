#include "SpineChillPerk.h"
#include "Net/UnrealNetwork.h"

void USpineChillPerk::OnRep_IsInRange()
{

}

bool USpineChillPerk::IsLookingTowards()
{
	return false;
}

bool USpineChillPerk::IsInRange()
{
	return false;
}

bool USpineChillPerk::HasLineOfSight()
{
	return false;
}

float USpineChillPerk::GetRange()
{
	return 0.0f;
}

float USpineChillPerk::GetLingerDuration()
{
	return 0.0f;
}

float USpineChillPerk::GetActionSpeed(int32 perkLevel)
{
	return 0.0f;
}

void USpineChillPerk::Authority_OnIsLookingTowardsChanged(const bool isLookingTowards)
{

}

void USpineChillPerk::Authority_OnIsInLineOfSightChanged(const bool isInLineOfSight)
{

}

void USpineChillPerk::Authority_OnInRangeChanged(const bool inRange)
{

}

bool USpineChillPerk::AreTriggersMet()
{
	return false;
}

void USpineChillPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USpineChillPerk, _isInRange);
}

USpineChillPerk::USpineChillPerk()
{
	this->_spineChillEffectClass = NULL;
	this->_actionSpeed = 0.000000;
	this->_lingerDuration = 0.500000;
	this->_range = 3600.000000;
	this->_precisionAngleDegrees = 45.000000;
	this->_isInRange = false;
}
