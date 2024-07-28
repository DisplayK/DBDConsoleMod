#include "OnryoPower.h"
#include "Net/UnrealNetwork.h"
#include "OnryoTeleportTargeterComponent.h"

void AOnryoPower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AOnryoPower, _televisionTargeter);
	DOREPLIFETIME(AOnryoPower, _manifestationComponent);
	DOREPLIFETIME(AOnryoPower, _televisions);
}

AOnryoPower::AOnryoPower()
{
	this->_condemnedComponentClass = NULL;
	this->_manifestationComponentClass = NULL;
	this->_effects = TArray<FStatusEffectSpawnData>();
	this->_televisionTargeter = CreateDefaultSubobject<UOnryoTeleportTargeterComponent>(TEXT("TeleportTargeter"));
	this->_manifestationComponent = NULL;
	this->_televisions = TArray<AOnryoTelevision*>();
	this->_televisionClass = NULL;
	this->_onryoPowerCooldownInteraction = NULL;
}
