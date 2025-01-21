#include "ChainsawRevInteraction.h"

void UChainsawRevInteraction::OnLevelReadyToPlay()
{

}

UChainsawRevInteraction::UChainsawRevInteraction()
{
	this->_soundCueDistanceDataID = NAME_None;
	this->_chainsawRevStartAkAudioEvent = NULL;
	this->_chainsawRevEndAkAudioEvent = NULL;
	this->_owningSlasher = NULL;
}
