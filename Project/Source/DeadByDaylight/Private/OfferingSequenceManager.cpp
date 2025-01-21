#include "OfferingSequenceManager.h"
#include "EOfferingSequenceState.h"

EOfferingSequenceState AOfferingSequenceManager::GetCurrentState() const
{
	return EOfferingSequenceState::SmokeIn;
}

void AOfferingSequenceManager::FadeInScreen()
{

}

bool AOfferingSequenceManager::ContainsEventCard() const
{
	return false;
}

bool AOfferingSequenceManager::ContainsDefaultCard() const
{
	return false;
}

AOfferingSequenceManager::AOfferingSequenceManager()
{
	this->_gameInstance = NULL;
	this->_localPlayerController = NULL;
	this->_offeringHandler = NULL;
	this->_sequenceAssets = NULL;
	this->_hud = NULL;
	this->_offeringCamera = NULL;
	this->_spawnedCards = TMap<uint8, AOfferingCard*>();
	this->_defaultCardsClass = NULL;
	this->_eventCardsClass = NULL;
}
