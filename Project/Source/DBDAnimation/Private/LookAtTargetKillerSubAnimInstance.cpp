#include "LookAtTargetKillerSubAnimInstance.h"

class ADBDPlayer;

void ULookAtTargetKillerSubAnimInstance::OnChaseStarted(ADBDPlayer* target)
{

}

void ULookAtTargetKillerSubAnimInstance::OnChaseEnded(ADBDPlayer* target, float chaseTime)
{

}

ULookAtTargetKillerSubAnimInstance::ULookAtTargetKillerSubAnimInstance()
{
	this->_maxDistanceForTargetDetection = 1000.000000;
	this->_headSocket = TEXT("joint_Head_01");
	this->_rootSocket = TEXT("joint_Char");
	this->_preferredMinLookAtTime = 2.000000;
	this->_distanceScoreFactor = 1.000000;
	this->_angleScoreFactor = 2.000000;
	this->_sameTargetScoreFactor = 2.000000;
	this->_yawToTarget = 0.000000;
	this->_pitchToTarget = 0.000000;
	this->_hasVisibleTarget = false;
}
