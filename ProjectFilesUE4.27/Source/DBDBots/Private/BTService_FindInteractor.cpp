#include "BTService_FindInteractor.h"

UBTService_FindInteractor::UBTService_FindInteractor()
{
	this->SearchInterval = 1.500000;
	this->SearchHeightAmplifierActivationHeight = 350.000000;
	this->SearchHeightAmplifier = 3.000000;
	this->FilterClass = NULL;
	this->RegisterAsDiscoveredWhenFound = true;
	this->OnlyWithInteractorIDs = TArray<FString>();
	this->RejectIfTerrorIsCloserThanSelfMargin = -1.000000;
	this->RejectIfInTerrorRadius = 0.000000;
	this->RejectIfInPressureZone = false;
	this->UseLastKnownPositionForTerrorRejects = false;
	this->RejectIfWasInCooldownAndFocusedOnAnotherObject = true;
	this->RejectCooldownContextName = NAME_None;
	this->RejectIfAnySiblingInteractorHasCooldown = false;
	this->AbandonIfInChase = false;
	this->RejectIfFocusedByOther = true;
	this->RejectIfNotFocusedBySelf = true;
	this->IgnoreFocusFilterInEndgameCollapse = false;
	this->RejectIfNotInSight = false;
	this->IgnoreSightFilterIfDiscovered = false;
	this->IgnoreSightFilterIfInRange = false;
	this->RejectAboveRange = -1.000000;
	this->IgnoreRangeFilterIfDiscovered = false;
	this->IgnoreRangeFilterIfInSight = false;
	this->_goalInteractor = NULL;
	this->_aiOwner = NULL;
}
