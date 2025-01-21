#include "LookAtThreatSurvivorSubAnimInstance.h"

ULookAtThreatSurvivorSubAnimInstance::ULookAtThreatSurvivorSubAnimInstance()
{
	this->_maxDistanceForThreatDetection = 1000.000000;
	this->_headSocket = TEXT("joint_Head_01");
	this->_rootSocket = TEXT("joint_Char");
	this->_yawToThreat = 0.000000;
	this->_pitchToThreat = 0.000000;
	this->_isVisibleThreat = false;
}
