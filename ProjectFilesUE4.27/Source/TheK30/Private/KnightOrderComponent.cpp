#include "KnightOrderComponent.h"
#include "Net/UnrealNetwork.h"

void UKnightOrderComponent::OnCurrentInteractionFinished()
{

}

void UKnightOrderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UKnightOrderComponent, _possiblyTargetableObjects);
}

UKnightOrderComponent::UKnightOrderComponent()
{
	this->_possiblyTargetableObjects = TArray<AInteractable*>();
	this->_targetableObjects = TArray<AInteractable*>();
	this->_showTargetableAura = true;
	this->_showTargetableVFXWhilePowerIsReady = true;
	this->_currentTarget = NULL;
	this->_orderTarget = NULL;
	this->_bestInteraction = NULL;
	this->_currentInteraction = NULL;
	this->_guardWaitingForInteraction = NULL;
	this->_palletOrderClass = NULL;
	this->_killerBreakPalletClass = NULL;
	this->_generatorOrderClass = NULL;
	this->_killerBreakGeneratorClass = NULL;
	this->_breakableOrderClass = NULL;
	this->_killerBreakBreakableClass = NULL;
	this->_updateRate = 0.250000;
	this->_maxTargetingAngle = 15.000000;
	this->_downRaycastLength = 80.000000;
}
