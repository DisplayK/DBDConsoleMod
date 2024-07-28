#include "K28LockerComponent.h"

UK28LockerComponent::UK28LockerComponent()
{
	this->_lockerCosmeticHelper = NULL;
	this->WarningSoundTimeInterval = 1.000000;
	this->WarningSoundRange = 1600.000000;
	this->_lockerInteractionClasses = TArray<TSubclassOf<UBaseLockerInteraction>>();
	this->_lockerCosmeticHelperClass = NULL;
	this->_lockerGrabOverridingClass = NULL;
	this->_lockerInteractionClassesToOverride = TArray<TSubclassOf<UBaseLockerInteraction>>();
	this->_lockedOutlineOverrides = TArray<FCustomLockerOutlineOverride>();
	this->_maxSqrtDistanceForCluster = 40000.000000;
	this->_minDotProductForCluster = -0.100000;
	this->_abductionCameraOffset = 50.000000;
	this->_killer = NULL;
}
