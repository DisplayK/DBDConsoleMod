#include "K29SurvivorStatus.h"

FK29SurvivorStatus::FK29SurvivorStatus()
{
	this->IsGrabbedByPower = false;
	this->LastTimeGrabbedByPower = 0.0f;
	this->OwningSurvivor = NULL;
	this->InfectionLevel = 0;
	this->TimesCuredByHeal = 0;
	this->IsInfected = false;
	this->IsInfectionActive = false;
	this->UseInfectionRemoverInteractionSelf = NULL;
	this->UseInfectionRemoverInteractionOther = NULL;
	this->UseInfectionRemoverChargeable = NULL;
	this->AreInfectionRemoverInteractionsInitialized = false;
	this->CarriableComponent = NULL;
	this->ThrowableComponent = NULL;
	this->InteractionBlockReasons = TArray<EK29SurvivorInteractionBlockReason>();
}
